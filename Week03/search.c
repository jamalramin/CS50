#include <cs50.h>
#include <stdio.h>

int main(void){
    int number = get_int("write down the number you want: ");
    int myNumber []= {2, 4, 6 ,8, 5 ,1};
    for( int i = 0 ; i < 6 ; i++){
        if(number == myNumber[i] ){
            printf("The Number %d exists \n", number);
            return 1;
        }
    }
    printf("The Number was not found \n");
        
}