difficulty="hard"
inputfile = "copy_" + difficulty + ".txt"
outputfile = "solved_" + difficulty + ".txt"
# Open the file and read all lines into a list
with open(inputfile, 'r') as file:
    lines = file.readlines()

# Remove all strings that contain '%'
lines = [line for line in lines if '%' not in line]

# Remove all strings that don't start with a number
lines = [line for line in lines if line.strip() and line.strip()[0].isdigit()]

# Write the filtered lines to 'solved.txt'
with open(outputfile, 'w') as file:
    file.writelines(lines)
