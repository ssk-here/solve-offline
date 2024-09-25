# Python script to extract substrings from neetraw.txt

def extract_leetcode_solutions(filename):
    try:
        # Open the file in read mode
        with open(filename, 'r') as file:
            content = file.read()

            # Initialize an empty list to store the extracted substrings
            extracted_substrings = []

            # Search for "/leetcode-solutions/" and collect substrings
            start_index = 0
            while True:
                start_index = content.find("/leetcode-solutions/", start_index)
                if start_index == -1:
                    break  # No more occurrences found
                end_index = content.find('"', start_index)
                if end_index == -1:
                    break  # Matching double quote not found
                extracted_substring = content[start_index:end_index]
                extracted_substrings.append(extracted_substring)
                start_index = end_index + 1

            return extracted_substrings

    except FileNotFoundError:
        print(f"File '{filename}' not found.")
        return []

# Usage
if __name__ == "__main__":
    filename = "neetraw.txt"
    solutions = extract_leetcode_solutions(filename)
    if solutions:
        solutions = [solution.replace("/leetcode-solutions/", "https://leetcode.com/problems/") for solution in solutions]
        solutions = [solution for solution in solutions if not solution.endswith("\\")]
        with open("neet_url.txt", "w") as output_file:
            for solution in solutions:
                output_file.write(solution + "\n")
        print(f"Extracted substrings have been written to 'neet_url.txt'.")

    else:
        print("No matching substrings found.")
