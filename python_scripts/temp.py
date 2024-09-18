# Read the input file
input_filename = "week1.txt"

# Create a list to store the filtered lines
filtered_lines = []

with open(input_filename, "r") as infile:
    for line in infile:
        # Remove leading/trailing whitespace
        line = line.strip()
        if line.startswith("https"):
            filtered_lines.append(line)

# Write the filtered lines back to the file
with open(input_filename, "w") as outfile:
    for line in filtered_lines:
        outfile.write(line + "\n")

print(f"Filtered lines written back to {input_filename}")
