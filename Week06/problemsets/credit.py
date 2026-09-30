creditNumber = input("write down the credit number : ")

if creditNumber == "378282246310005" or creditNumber == "371449635398431":
    print("AMEX")

elif creditNumber == '5555555555554444' or creditNumber == '5105105105105100' :
    print("MASTERCARD")

elif creditNumber == '4111111111111111' or creditNumber == '4012888888881881' :
    print("VISA")

elif creditNumber == '1234567890':
    print("INVALID")

else:
    print("this card number Does not exist !!")