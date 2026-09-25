#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {

    //this linee of code is gonig to open  a file
    FILE *file = fopen("myNotes.txt", "a");

    string text = get_string("type the text : ");


    int t = 1;
    
    if (file != NULL){
        
        for(int i =0; text[i] != '\0'; i++){

            text[i] = toupper(text[i]);
            
        }
        fprintf(file, " %s \n", text);
        fclose(file);
    }
    
}