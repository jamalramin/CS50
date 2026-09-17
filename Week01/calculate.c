#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int money = 1;
    while(true){

        char x;
        printf("There is %i Euros. Do you want it or double it and give it to the next person? Type 'y' for yes or 'n' for no: ", money);
        scanf(" %c", &x);

        if (x == 'y') {
            money *= 2;
            break;
        }
        else {
            break;
        }
    }
}
