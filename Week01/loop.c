#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // int x = 5;

    // while (x > 0){
    //     printf("Hello, world\n");
    //     x--;
    // } 

    string namee = get_string("What is your name?: ");

    int number_of_hello = get_int("How many times should i say the word: ");

    

    while (number_of_hello > 0){
        printf(" %s!\n", namee);
        continue;
        number_of_hello--;
    }

}
