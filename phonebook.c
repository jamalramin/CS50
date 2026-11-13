#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{

    FILE *file = fopen("BOOK.csv", "w");

    // Prompt user for name
    string name = get_string("Name: ");

    // Prompt user for number
    string number = get_string("Number: ");

    // Print name and number
    fprintf(file, "%s: %s\n", name, number);

    // Close file
    fclose(file);
}