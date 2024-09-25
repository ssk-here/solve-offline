import requests
import json
from types import SimpleNamespace
import os
import sys
import shutil

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
    return file_path
baseJSON = {
    "operationName": "questionData",
    "variables": {
        "titleSlug": "PLACEHOLDER"
    },
    "query": "query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    exampleTestcases\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      paidOnly\n      hasVideoSolution\n      paidOnlyVideo\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    enableDebugger\n    envInfo\n    libraryUrl\n    adminUrl\n    __typename\n  }\n}\n"
}

graphQLEndpoint = 'https://leetcode.com/graphql'


def get_jsondata(question_link):
    global baseJSON
    global graphQLEndpoint
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
    return x.data.question

def create_md(url, foldername):
    question_content = get_jsondata(url)
    ccp_code = ""
    if question_content.codeSnippets:
        for y in question_content.codeSnippets:
            if y.langSlug == 'cpp':
                ccp_code = y.code
                break
    titleSlug = question_content.titleSlug
    file_path = create_file_if_not_exists(foldername, titleSlug, 'md')
    title = question_content.title
    content = question_content.content
    difficulty = question_content.difficulty
    
    with open(file_path, 'w', encoding='utf-8') as md_file:
        md_file.write(f"# {title}\n\n")
        md_file.write(f"**Difficulty:** {difficulty}\n\n")
        md_file.write(f"**Link:** {url}\n\n")
        md_file.write(f"## Content\n\n{content}\n\n")
        md_file.write(f"## C++ Code\n\n```cpp\n{ccp_code}\n```\n")
        md_file.write(f"## Notes\n\n")
        md_file.write(f"<!--\n")
        md_file.write(f"Add your notes here.\n\n")
        md_file.write(f"-->\n")
        md_file.write(f"## Other Solutions\n\n```cpp\n")
        md_file.write(f"// Add another solution here\n")
        md_file.write(f"```\n")

def create_notes(inputslug):
    foldername = "leetcode_notes"
    create_folder_if_not_exists(foldername)
    solved_folder = os.path.join(foldername, inputslug)
    if os.path.exists(solved_folder):
        print(f"Folder '{solved_folder}' already exists. Skipping...")
        return
    create_folder_if_not_exists(solved_folder)
    inputfile = inputslug + ".txt"
    question_links = []
    with open(inputfile, 'r') as file:
        question_links = [line.strip() for line in file.readlines()]
    question_links = [link for link in question_links if link.startswith('http')]
    if len(question_links) == 0:
        print("No valid links found in the input file.")
        sys.exit(1)
    for url in question_links:
        create_md(url, solved_folder)
    print(f"Created notes for {inputslug} in folder '{solved_folder}'")

def create_summary(url, file_path):
    question_content = get_jsondata(url)
    ccp_code = ""
    if question_content.codeSnippets:
        for y in question_content.codeSnippets:
            if y.langSlug == 'cpp':
                ccp_code = y.code
                break
    title = question_content.title
    content = question_content.content
    # Extract content until "Example 1"
    if content:
        example_index = content.find("Example 1")
        if example_index != -1:
            content = content[:example_index]
    difficulty = question_content.difficulty
    
    with open(file_path, 'a', encoding='utf-8') as md_file:
        md_file.write(f"----\n\n")
        md_file.write(f"# {title}\n\n")
        md_file.write(f"**Difficulty:** {difficulty}\n\n")
        md_file.write(f"**Link:** {url}\n\n")
        md_file.write(f"## Content\n\n{content}\n\n")
        md_file.write(f"## C++ Code\n\n```cpp\n{ccp_code}\n```\n")
        md_file.write(f"## Notes\n\n")
        md_file.write(f"<!--\n")
        md_file.write(f"Add your notes here.\n\n")
        md_file.write(f"-->\n")
        md_file.write(f"## Other Solutions\n\n```cpp\n")
        md_file.write(f"// Add another solution here\n")
        md_file.write(f"```\n")


def create_short_summary(url, file_path):
    question_content = get_jsondata(url)
    ccp_code = ""
    if question_content.codeSnippets:
        for y in question_content.codeSnippets:
            if y.langSlug == 'cpp':
                ccp_code = y.code
                break
    title = question_content.title
    content = question_content.content
    # Extract content until "Example 1"
    if content:
        example_index = content.find("Example 1")
        if example_index != -1:
            content = content[:example_index]
    difficulty = question_content.difficulty
    
    with open(file_path, 'a', encoding='utf-8') as md_file:
        md_file.write(f"----\n\n")
        md_file.write(f"# {title}\n\n")
        md_file.write(f"**Difficulty:** {difficulty}\n\n")
        md_file.write(f"**Link:** {url}\n\n")
        md_file.write(f"## C++ Code\n\n```cpp\n{ccp_code}\n```\n")
        md_file.write(f"## Notes\n\n")

def main():
    # inputfile = input("Enter the input file of urls name (without .txt extension): ")
    # foldername = input("Enter the folder name: ")
    inputslugs = [f"solved{i}" for i in range(1, 22)]
    foldername = "leetcode_summary"
    for inputslug in inputslugs:
        inputfile = inputslug + ".txt"
        question_links = []
        with open(inputfile, 'r') as file:
            question_links = [line.strip() for line in file.readlines()]
        question_links = [link for link in question_links if link.startswith('http')]
        if len(question_links) == 0:
            print("No valid links found in the input file.")
            sys.exit(1)
        create_folder_if_not_exists(foldername)
        file_path = create_file_if_not_exists(foldername,"short_" + inputslug,'md')
        for url in question_links:
            create_short_summary(url, file_path)
        print(f"Created summary for {inputslug} in folder ")
    
if __name__=='__main__':
    print('\n')
    main()