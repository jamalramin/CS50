#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int year;
    char speed[20];
    char price[20];
} car_info;

int main(void){
    car_info car;
    strcpy(car.name, "Toyota");
    car.year = 2026;
    strcpy(car.speed, "450km/h");
    strcpy(car.price, "500000 Euros");

    printf("name : %s \nYear: %d \nSpeed: %s \nPrice: %s\n", car.name, car.year, car.speed, car.price);

}
