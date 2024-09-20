import csv

def filter_https_lines(input_filename):
    # Create a list to store the filtered lines
    filtered_lines = []

    with open(input_filename, "r") as infile:
        for line in infile:
            # Remove leading/trailing whitespace
            line = line.strip()
            if line.startswith("https"):
                filtered_lines.append(line)
    return filtered_lines


def write_lines_to_file(lines, output_filename):
    with open(output_filename, "a") as outfile:
        for line in lines:
            outfile.write(line + "\n")

# Example usage
output_filename = "all_url.txt"
filtered_lines = []
L =[[i] for i in range(1,11)]
for n in range(1,11):
    input_tag = "week" + str(n)
    input_filename = input_tag + ".txt"
    filtered_lines = filter_https_lines(input_filename)
    write_lines_to_file(filtered_lines, output_filename)
    L[n-1].append(filtered_lines)

csv_filename = "problems_labmanual.csv"
with open(csv_filename, "w", newline='') as csvfile:
    csvwriter = csv.writer(csvfile)
    csvwriter.writerow(["Sno", "Week", "URL"])
    sno=1
    for week_data in L:
        week_number = "WEEK" + str(week_data[0])
        urls = week_data[1]
        for url in urls:
            csvwriter.writerow([sno,week_number, url])
            sno = sno + 1

print(f"CSV file created: {csv_filename}")
#print(f"Filtered lines written back to {output_filename}")

