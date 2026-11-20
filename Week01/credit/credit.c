#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void){

    long card_number = get_long("Number: ");

    long temp = card_number;
    int num_digits = 0;

    while(temp > 0){
        temp /= 10;
        num_digits++;
    }

    if (num_digits == 16 ) {
        printf("this card number is: %04ld-%04ld-%04ld-%04ld and its valid\n",
            card_number / 1000000000000,
            (card_number / 100000000) % 10000,
            (card_number / 10000) % 10000,
            card_number % 10000
        );
    }

    else{
        printf("Card Number: %04ld-%04ld-%04ld-%04ld and its not a valid cardnumber\n",
            card_number / 1000000000000,
            (card_number / 100000000) % 10000,
            (card_number / 10000) % 10000,
            card_number % 10000
            
        );
    }


}
