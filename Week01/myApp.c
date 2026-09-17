#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string name = get_string("What is your name? ");
   string age = get_string("What is your age? ");
   string city = get_string("What is your city? ");

   printf("Hello, %s! You are %s years old and live in %s.\n", name, age, city);   
}
