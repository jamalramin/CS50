#include <stdio.h>
#include <cs50.h>
#include <string.h>

// typedef struct contact
// {
//     /* data */
//     string name;
//     string phone;

// } person;

// int main(void){
//     person info[5];

//     info[0].name = "Ramin";
//     info[0].phone = "0123456789";

//     info[1].name = "Alex";
//     info[1].phone = "024682468";
    
//     info[2].name = "Ahmad";
//     info[2].phone = "0987654321";
    
//     info[3].name = "Lili";
//     info[3].phone = "0123123123";
    
//     info[4].name = "Tim";
//     info[4].phone = "0987987987";

//     string name = get_string("what name do you Search for : ");

//     for (int i = 0; i < 5 ; i++){
//         if (strcmp(info[i].name, name) == 0){
//             printf("%s exsist in you Contacts book. His / Her number is %s \n", info[i].name , info[i].phone);
//             return 0;

//         }
//     }
//     printf("this person does not exist!!\n");
//     return 1;


typedef struct{
    string name;
    string phonenumber;
} person;

int main(void){

    person information[3];

    information[0].name = "ali";
    information[0].phonenumber= "123";

    information[1].name = "omid";
    information[1].phonenumber= "321";

    information[2].name = "noah";
    information[2].phonenumber= "246";

    string details = get_string("name pls::  ");

    for (int i = 0; i < 3; i++){
        if(strcmp(information[i].name, details) == 0){
            printf("yesssss %s. your number %s \n", information[i].name , information[i].phonenumber);
            return 0;
        }
    }
    printf("not found ");
    return 1;
}

