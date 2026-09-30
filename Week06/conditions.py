students= {'tim', 'lili', 'ramin', 'ahmad', 'max' }

name = input("what is your name: ")
x = name.upper()

if name in students:
    print(f"Hey {x} you are our Stundent.")

else:
    print(f"Hey {x} sorry! you are not our student/")
