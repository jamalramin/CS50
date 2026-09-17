#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char ask = get_char("are you agree?: ");

    if (ask == 'y' || ask == 'Y')
    {
        printf("agree \n");
    }
    else {
        printf("disagree \n");
    }
}
