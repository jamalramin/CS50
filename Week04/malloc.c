#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for one integer
    ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 25;

    printf("Value = %d\n", *ptr);

    // Release the allocated memory
    free(ptr);

    return 0;
}