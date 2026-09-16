#include <stdio.h>
#include "cs50.h"
 
int main(void){
    string name = get_string("Name: ");
    int age = get_int("Age: ");

    printf("Hey, %s. You are %i years old.\n", name, age);
}