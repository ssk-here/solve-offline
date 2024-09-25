import csv
import pandas as pd

difficulty="easy"
inputfile = "solved_" + difficulty + ".txt"
csv_file = 'All_2k_leetcode.csv'
output_file = difficulty + ".csv"

with open(inputfile, 'r') as file:
    lines = file.readlines()

processed_lines = []
for line in lines:
    for i, char in enumerate(line):
        if not char.isdigit() and char not in ['.']:
            processed_lines.append(line[i:].strip())
            break
hard_titles = processed_lines

#now extract the corresponding url from the csv file
# Read the CSV file into a DataFrame
df = pd.read_csv(csv_file)

# Create an empty DataFrame with the same columns as df
filtered_df = pd.DataFrame(columns=df.columns)

# # Print the first line of the DataFrame
# print(df.iloc[0])

# # Print the third line of the DataFrame
# print(df.iloc[2])

# # Print the first 5 lines under the column 'Problem Title'
# print(df['Problem Title'].head(5))

# Convert "Problem Title" column to a list of strings and remove leading and trailing spaces
problem_titles = df["Problem Title"].str.strip().tolist()
hard_titles = [s.strip() for s in hard_titles]

# Find indices of matching problem titles
matching_indices = [i for i, title in enumerate(problem_titles) if title in hard_titles]

# Find titles in hard_titles that are not in problem_titles of matching indices
matching_problem_titles = [problem_titles[i] for i in matching_indices]
missing_titles = [title for title in hard_titles if title not in matching_problem_titles]

# Print the missing titles
print("Titles in hard_titles that are not present in problem_titles of matching indices:")
for title in missing_titles:
    print(title)

filtered_df = df.iloc[matching_indices].reset_index(drop=True)



# Print the rows of the DataFrame corresponding to the matching indices
# for index in matching_indices:
#     filtered_df = filtered_df._append(df.iloc[index])

#Write the filtered DataFrame to a new CSV file
filtered_df.to_csv(output_file, index=False)

