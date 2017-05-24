# -*- coding: utf-8 -*-

# run it with: 
#   python index.py

if __name__ == "__main__":
    import csv
    csv_reader = csv.reader(open('../test.csv'))
    for row in csv_reader:
        print(",".join(row))
        
    print("end.")