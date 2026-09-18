#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void){

    long cardNumber = get_long("Number: ");

    long temp = cardNumber;
    int numDigits = 0;

    while(temp > 0){
        temp /= 10;
        numDigits++;
    }

    if (numDigits == 16 ) {
        printf("this card number is: %04ld-%04ld-%04ld-%04ld and its valid\n",
            cardNumber / 1000000000000,
            (cardNumber / 100000000) % 10000,
            (cardNumber / 10000) % 10000,
            cardNumber % 10000
        );
    }

    else{
        printf("Card Number: %04ld-%04ld-%04ld-%04ld and its not a valid cardnumber\n",
            cardNumber / 1000000000000,
            (cardNumber / 100000000) % 10000,
            (cardNumber / 10000) % 10000,
            cardNumber % 10000
            
        );
    }


}