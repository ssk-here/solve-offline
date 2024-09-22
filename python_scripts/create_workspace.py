import requests
import json
from types import SimpleNamespace
import os
import sys
#import pdfkit
import shutil
#from weasyprint import HTML
# inputfile = 'week1'

def create_folder_if_not_exists(folder_name):
    if not os.path.exists(folder_name):
        os.makedirs(folder_name)
    #     print(f"Folder '{folder_name}' created.")
    # else:
    #     print(f"Folder '{folder_name}' already exists.")


def create_file_if_not_exists(folder_name,filename,extn):
    filename = filename + "." + extn
    create_folder_if_not_exists(folder_name)
    file_path = os.path.join(folder_name, filename)
    if not os.path.exists(file_path):
        with open(file_path, 'w') as file:
            file.write('')
        print(f"File '{filename}' created in folder '{folder_name}'.")
    else:
        print(f"File '{filename}' already exists in folder '{folder_name}'.")

strMain = """
void Test(const std::string& inputfile, const std::string& outputfile) {
;    
}

int main(int argc, char* argv[]) {

    Common().parseArguments(argc,argv);

    Test(argv[1], argv[2]);

    return 0;
}
    """

def create_leetcode_files(foldername, code, titleslugs, tests):
    # Create folder
    create_folder_if_not_exists(foldername)
    global strMain
    # Create file with content
    for title_slug, code_content, testcases in zip(titleslugs, code, tests):
        header = f"""
/**
* @file {title_slug}.cpp
* @author [Your Name]
* @date [Current Date]
* @see https://leetcode.com/problems/{title_slug}
* @brief   
* Time Complexity: 
* Space Complexity: 
* Build using .\\build.bat "{foldername}" "{title_slug}"
*/
#include <allheaders.h>
using namespace std;
"""
        code_content = header + code_content + strMain
        file_path = os.path.join(foldername, f"{title_slug}.cpp")
        input_path = os.path.join(foldername, f"{title_slug}_input.txt")
        output_path = os.path.join(foldername, f"{title_slug}_output.txt")
        with open(file_path, 'w') as file:
            file.write(code_content)
            print(f"Content written to file '{file_path}'.")
        with open(input_path, 'w') as file:
            file.write(testcases)
            print(f"Test cases written to file '{input_path}'.")
        with open(output_path, 'w') as file:
            file.write("Output:\n")
            print(f"Output placeholder written to file '{output_path}'.")

baseJSON = {
    "operationName": "questionData",
    "variables": {
        "titleSlug": "PLACEHOLDER"
    },
    "query": "query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    exampleTestcases\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      paidOnly\n      hasVideoSolution\n      paidOnlyVideo\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    enableDebugger\n    envInfo\n    libraryUrl\n    adminUrl\n    __typename\n  }\n}\n"
}

graphQLEndpoint = 'https://leetcode.com/graphql'

htmlstr = '<div>'
htmlstr += '<style> @page { size: letter portrait; margin: 2cm; }\n * { word-wrap: break-word; } pre { white-space: pre-wrap; } </style>'
contents_str = "<div><h2>Contents</h2></div><br />"
serialno = 1
code = []
titleslugs = []
tests = []
foldername=""

#copies all .txt files to data folder
def copy_txt_files(folder_name):
  # Create the 'data' subfolder if it doesn't exist
  data_folder = os.path.join(folder_name, 'data')
  if not os.path.exists(data_folder):
    os.makedirs(data_folder)

  # Iterate through all files in the given folder
  for file_name in os.listdir(folder_name):
    if file_name.endswith('.txt'):
      source_path = os.path.join(folder_name, file_name)
      destination_path = os.path.join(data_folder, file_name)
      shutil.copy(source_path, destination_path)

def delete_original_txt_files(folder_name):
  # Iterate through all files in the given folder
  for file_name in os.listdir(folder_name):
    if file_name.endswith('.txt') and not file_name.startswith('data'):
      file_path = os.path.join(folder_name, file_name)
      #print(file_path)
      os.remove(file_path)

def update_question_links(question_links):
    global inputfile
    with open(inputfile) as f:
        links =  f.read()

    links = links.split('\n')

    for each in links:
        question_links.append(each)

def get_section(section_text):
    global htmlstr
    global contents_str
    section_html = f'<div><h1>{section_text[1:]}</h1></div><p style="page-break-before: always" ></p>'
    if section_html.strip():  # Add only if non-empty
        htmlstr += section_html
    htmlstr += "XXXX_REPLACE_CONTENTS_XXXX"
    
def get_question(question_link):
    slug = question_link.split('https://leetcode.com/problems/', 1)[1]
    baseJSON['variables']['titleSlug'] = slug
    json_data_folder = 'json_data'
    create_folder_if_not_exists(json_data_folder)
    json_file_path = os.path.join(json_data_folder, f"{slug}.json")
    if os.path.exists(json_file_path):
        with open(json_file_path, 'r') as json_file:
            resp = json.load(json_file)
        print(f"Reading from file '{json_file_path}'")
    else:
        resp = requests.post(graphQLEndpoint, json=baseJSON).json()
        print(f"Writing to file '{json_file_path}'")
        with open(json_file_path, 'w') as json_file:
            json.dump(resp, json_file, indent=4)
        with open(json_file_path, 'r') as json_file:
            resp = json.load(json_file)
    # x = json.loads(resp, object_hook=lambda d: SimpleNamespace(**d))
    x = json.loads(json.dumps(resp), object_hook=lambda d: SimpleNamespace(**d))
    StartCode = ""
    for y in x.data.question.codeSnippets:
    # use python3 or python or cpp
        if y.langSlug == 'cpp':
            StartCode = y.code
            break
    global htmlstr
    global contents_str
    global serialno    
    global code, titleslugs, tests
    code.append(StartCode)
    titleslugs.append(x.data.question.titleSlug)
    tests.append(x.data.question.exampleTestcases)
    contents_str += f'<div><h3>{serialno}. {x.data.question.title} - {x.data.question.difficulty}</h3></div>'
    question_html = f'<div><h2>{x.data.question.title}</h2>{x.data.question.content}</div><div>{StartCode}</div><p style="page-break-before: always" ></p>'
    if question_html.strip():  # Add only if non-empty
        htmlstr += question_html
    serialno = serialno + 1

def main():
    global inputfile,foldername,code,titleslugs,tests
    inputfile = input("Enter the input file name (without extension): ")
    foldername = input("Enter the folder name: ")
    outputhtml = inputfile + ".html"
    outputpdf = inputfile + ".pdf"
    inputfile = inputfile + ".txt"
    
    question_links = []
    update_question_links(question_links)
    for line in question_links:
        try:
            if line[0] == '~':
                get_section(line)
            else:
                get_question(line)
            print(line, end='')  # Print without newline
            print('------------------------------')

        except:
            continue
    #creates the workspace
    create_leetcode_files(foldername, code, titleslugs, tests)
    copy_txt_files(foldername)
    delete_original_txt_files(foldername)
    #creates html and pdf
    global htmlstr
    global contents_str
    contents_str += '<p style="page-break-before: always" ></p>'
    htmlstr = htmlstr.replace("XXXX_REPLACE_CONTENTS_XXXX",contents_str,1)
    with open(outputhtml, 'wb') as file:
        file.write(htmlstr.encode('utf-8'))
    htmlstr += '</div>'
    # write pdf
    # from xhtml2pdf import pisa
    # with open(outputpdf, "w+b") as pdf_file:
    #     pisa.CreatePDF(htmlstr, dest=pdf_file)
    #writes html to pdf
    #print("PDF created successfully!")
    #HTML(string=htmlstr).write_pdf(outputpdf)

if __name__=='__main__':
    print('\n')
    main()

