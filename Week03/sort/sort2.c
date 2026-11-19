#include <stdio.h>

int main(void)
{

    FILE *x;
    int number;
    int arr [5000];
    int n = 0;
    int first_number;


    // this code opens the file /////
    x = fopen("random5000.txt", "r");


    ////// if it does not exist prints something
    if (x == NULL)
    {
        printf("the file can not be opend!!");
        return 1;
    }

    while (n < 5000 && fscanf(x, "%d", &number) == 1)
    {
        arr[n] = number;
        n++;
    }


    ///in htis loop is sorts the number in buble way
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {

            if (arr[k] < arr[k + 1])
            {
                first_number = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = first_number;
            }
        }
    }

    for (int i = 0 ; i < n ; i++ ){
        printf("%d\n", arr[i]);
    }

    fclose(x);
}


