#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>


int main(void){

    //this part is a simple guessing game where the user has to guess a number between 1 to 3, if the user guesses the number correctly then he/she will be congratulated otherwise the correct number will be displayed
    string name = get_string("write down your name: ");
    int age = get_int("write down your age: ");
    int number = get_int("Guess the number between 1 to 3; ");

    printf("Hey,%s your age is %i, you chose the number %i !! \n",name, age, number);


    int randomNumber = rand()%3 + 1;

    if(number == randomNumber){
        printf("Congratulation, you have guess the number correctly\n");
    }
    else{
        printf("Sorry, you have guess the number incorrectly, the correct number was %i\n", randomNumber);
    }

    //this part of the code is my own implementation of the mario pyramid problem from cs50 course
    int num = 10;
    while(true) {
        if(num == 0){
            printf("# \n");
            break;
        }
        else{
            printf("# \n");
            num -= 1;
        }
    }


    //this part of the code is Chatgpt implementation of the mario pyramid problem from cs50 course
    int height = get_int("Height: ");

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}


