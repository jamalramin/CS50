import csv

with open('people.csv','r') as file:
    read_it = csv.reader(file)

    #this line is going to skip the first line of the csv file
    next(read_it)

    PHP, Python, C = 0, 0, 0

    for x in read_it:
        if x[2] =="PHP":
            PHP += 1
        elif x[2] =="Python":
            Python += 1       
        elif x[2] =="C":
            C += 1

    print(f"PHP: {PHP}")
    print(f"Python: {Python}")
    print(f"C: {C}")