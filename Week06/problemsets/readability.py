sentence = input("what is your sentence: ")

if len(sentence) <= 10:
    print("you are at the first class")
elif 10 < len(sentence) < 25:
    print("you are at second grade")
else:
    print("your class is higher than second grade")