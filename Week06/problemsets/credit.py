creditNumber = input("write down the credit number : ")

if credit_number == "378282246310005" or credit_number == "371449635398431":
    print("AMEX")

elif credit_number == '5555555555554444' or credit_number == '5105105105105100' :
    print("MASTERCARD")

elif credit_number == '4111111111111111' or credit_number == '4012888888881881' :
    print("VISA")

elif credit_number == '1234567890':
    print("INVALID")

else:
    print("this card number Does not exist !!")
