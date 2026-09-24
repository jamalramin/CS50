#include <stdio.h>

int main(void){
    int n = 10;
    int *pointer = &n;

    char *x = "Hello, World!!";
    char *location = x;

    //this part is going to show us the location of 10
    printf("%p \n", (void *)pointer);

    //this code show the "Hello world"
    printf("%s \n", location);
}