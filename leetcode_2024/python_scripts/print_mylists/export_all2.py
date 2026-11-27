import requests
import json
from types import SimpleNamespace
from weasyprint import HTML
import sys
import re

# baseJSON = {
#     "operationName": "questionData",
#     "variables": {
#         "titleSlug": "PLACEHOLDER"
#     },
#     "query": "query questionData($titleSlug: String!) {  question(titleSlug: $titleSlug) {   questionId\n    title\n    titleSlug\n    content\n}}"
# }

baseJSON = {
    "operationName": "questionData",
    "variables": {
        "titleSlug": "PLACEHOLDER"
    },
    "query": "query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    exampleTestcases\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      paidOnly\n      hasVideoSolution\n      paidOnlyVideo\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    enableDebugger\n    envInfo\n    libraryUrl\n    adminUrl\n    __typename\n  }\n}\n"
}

inputfile = "question_links.txt"
graphQLEndpoint = 'https://leetcode.com/graphql'

htmlstr = ''
# htmlstr = '<div>'
#htmlstr += '<style> @page { size: letter landscape; margin: 2cm; }\n * { word-wrap: break-word; } pre { white-space: pre-wrap; } </style>'

def apply_styles_to_html(html_content, css_file_path):
  with open(css_file_path, 'r') as css_file:
    styles = css_file.read()
# Append the styles to the HTML content
  html_with_styles = f'<style>{styles}</style>\n<div>{html_content}</div>'
  return html_with_styles

def save_to_html(html_content, output_file):
  with open(output_file, 'w', encoding='utf-8') as file:
    file.write(html_content)

def update_question_links(question_links):
  global inputfile
  with open(inputfile) as f:
    links =  f.read()

  links = links.split('\n')

  for each in links:
    question_links.append(each)

def get_section(section_text):
  global htmlstr
  htmlstr += '<div>'
  htmlstr += f'<h1>{section_text[1:]}</h1>'
  htmlstr += '</div>'
  htmlstr += '<p style="page-break-before: always" ></p>'

def get_question(question_link):
  slug = question_link.split('https://leetcode.com/problems/', 1)[1]
  baseJSON['variables']['titleSlug'] = slug
  resp = requests.get(graphQLEndpoint, json=baseJSON)

  x = json.loads(resp.text, object_hook=lambda d: SimpleNamespace(**d))
  question_name = f'{x.data.question.questionId}-{x.data.question.title}'
  #save_to_html(x.data,question_name+'.json')
  StartCode = ""
  for y in x.data.question.codeSnippets:
    # use python3 or python or cpp
    if y.langSlug == 'cpp':
      StartCode = y.code
      break
  global htmlstr
  htmlstr += '<div>'
  htmlstr += f'<h2>{x.data.question.questionId}.{x.data.question.title}</h2>'
  htmlstr += f'<h3>{x.data.question.difficulty}</h3>'
  # remove consecutive newlines
  cleaned_content = re.sub(r'\n{2,}', '\n', x.data.question.content)
  #remove empty paragraph
  cleaned_content = re.sub(r'<p>&nbsp;</p>', '', cleaned_content)
  htmlstr += cleaned_content
  htmlstr += StartCode
  htmlstr += '</div>'
  htmlstr += '<p style="page-break-before: always" ></p>'



def main():
  if len(sys.argv) != 3:
    print("Usage: python script.py <input_file> <output_file>")
    sys.exit(1)
  
  global inputfile
  inputfile = sys.argv[1]
  output_file = sys.argv[2]

  question_links = []
  update_question_links(question_links)
  print(question_links)
  for myline in question_links:
      line = myline.strip()
      if line.endswith('/'):
         line = line[:-1]
      if len(line) == 0:
          break
      if line[0] == '~':
          get_section(line)
      else:
          get_question(line)
      print(line, end='')  # Print without newline
      print('------------------------------')
      
  global htmlstr
  css_file_path = 'styles.css'
  html_with_styles = apply_styles_to_html(htmlstr, css_file_path)
  save_to_html(html_with_styles, f'{output_file}.html')
  HTML(string=html_with_styles).write_pdf(f'{output_file}.pdf')



if __name__=='__main__':
  print('\n')
  main()
  
