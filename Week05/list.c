#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    /* data */
    int number;
    struct node *next;

}node;

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < 3; i++){
        node *n = malloc(sizeof(node));

        if (n == NULL){
            printf("Memeory allocation failed");
            return 1;
        }
        n -> number = get_int("which number :");
        n -> next = NULL;

        n -> next = list;
        list = n;
    }

    return 0;
}