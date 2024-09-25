import pandas as pd

with open('missingcsv.txt', 'r') as file:
    lines = file.readlines()

lines = [line.strip() for line in lines]
new_lines = [line.lower().replace(' ', '-') for line in lines]
prefix = "https://leetcode.com/problems/"
new_lines = [prefix + line for line in new_lines]

with open('missingurl.txt', 'w') as file:
    for line in new_lines:
        file.write(line + '\n')
# Assuming you have the additional data for level, tags, and acceptance
levels = ['Medium'] * len(lines)
tags = ['DONTKNOW'] * len(lines)
acceptance = [1.0] * len(lines)

data = {
    'Serial Number': list(range(1, len(lines) + 1)),
    'Title': lines,
    'Level': levels,
    'Tags': tags,
    'Acceptance': acceptance,
    'URL': new_lines
}

df = pd.DataFrame(data)
print(df)

df.to_csv('temp.csv', index=False)