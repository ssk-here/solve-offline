# convert leetcode id to url using all_url.csv

import csv

all_url = "all_url.csv"






def read_csv_to_dict(csv_file_path):
    id_url_dict = {}
    with open(csv_file_path, 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        headers = next(csv_reader, None)
        if headers and len(headers) >= 8:
            id_index = headers.index('LeetCode No')
            url_index = 7 
            for row in csv_reader:
                if len(row) > max(id_index, url_index):
                    id_value = row[id_index].strip()
                    url_value = row[url_index].strip()
                    id_url_dict[id_value] = url_value
    return id_url_dict


def id_to_url(input,result_dict):
    URLS = []
    outputfile = input + '_url'
    with open(input,'r') as f:
        L = f.readlines()

    ID = []
    for id in L:
        if len(id) > 0:
            ID.append(id.strip())

    for id in ID:
        if id in result_dict:
            print( result_dict[id] )
            URLS.append(result_dict[id])

    with open(outputfile,'w') as f:
        for url in URLS:
            f.write(url+'\n')


result_dict = read_csv_to_dict(all_url)

input = "graphsproblems"
id_to_url(input,result_dict)

input = "bsearchproblems"
id_to_url(input,result_dict)

input = "tressproblems"
id_to_url(input,result_dict)











