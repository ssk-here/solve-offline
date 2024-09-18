import requests
import json
from types import SimpleNamespace

question_link="https://leetcode.com/problems/binary-tree-paths"

baseJSON = {
    "operationName": "questionData",
    "variables": {
        "titleSlug": "PLACEHOLDER"
    },
    "query": "query questionData($titleSlug: String!) {\n  question(titleSlug: $titleSlug) {\n    questionId\n    questionFrontendId\n    boundTopicId\n    title\n    titleSlug\n    content\n    translatedTitle\n    translatedContent\n    isPaidOnly\n    difficulty\n    likes\n    dislikes\n    isLiked\n    similarQuestions\n    exampleTestcases\n    contributors {\n      username\n      profileUrl\n      avatarUrl\n      __typename\n    }\n    topicTags {\n      name\n      slug\n      translatedName\n      __typename\n    }\n    companyTagStats\n    codeSnippets {\n      lang\n      langSlug\n      code\n      __typename\n    }\n    stats\n    hints\n    solution {\n      id\n      canSeeDetail\n      paidOnly\n      hasVideoSolution\n      paidOnlyVideo\n      __typename\n    }\n    status\n    sampleTestCase\n    metaData\n    judgerAvailable\n    judgeType\n    mysqlSchemas\n    enableRunCode\n    enableTestMode\n    enableDebugger\n    envInfo\n    libraryUrl\n    adminUrl\n    __typename\n  }\n}\n"
}

graphQLEndpoint = 'https://leetcode.com/graphql'

slug = question_link.split('https://leetcode.com/problems/', 1)[1]
baseJSON['variables']['titleSlug'] = slug
resp = requests.get(graphQLEndpoint, json=baseJSON)
x = json.loads(resp.text, object_hook=lambda d: SimpleNamespace(**d))
print(x)
StartCode = ""
for y in x.data.question.codeSnippets:
# use python3 or python or cpp
    if y.langSlug == 'cpp':
        StartCode = y.code
        break
print(x.data.question.titleSlug)
print(f"TitleSlug: {x.data.question.titleSlug}")
print(f"Title: {x.data.question.title}")
print(f"Difficulty: {x.data.question.difficulty}")
print(f"Title Slug: {x.data.question.titleSlug}")
print(f"Content: {x.data.question.content}")
print(f"Example Testcases: {x.data.question.exampleTestcases}")
print(StartCode)
