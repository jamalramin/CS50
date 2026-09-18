#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string sentence = get_string("Enter a sentence: ");
    int length = strlen(sentence);

    if (length <= 10)
    {
        printf("You are at the 1 grade.\n");
    }
    else if (length >= 10 && length < 20)
    {
        printf("You are at the 2 grade.\n");
    }
    else if (length >= 20 && length <= 50)
    {
        printf("You are at the 5 grade.\n");
    }
    else
    {
        printf("You are at the 10 grade.\n");
    }
}
