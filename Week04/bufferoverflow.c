#include <stdio.h>
#include <string.h>

int main(void) {

    // this code means that our buffer is only 8 bytes long
    char buffer[8];

    //but here its more than 8 bytes long, so it will overflow the buffer and cause undefined behavior
    strcpy(buffer, "This string is too long!");

    printf("%s\n", buffer);

    return 0;
}