#include<stdio.h>

int main()
{
    int ar[5] = {3,1,7,6,5};

    int i, j, t;

    printf("The array is: ");

    for(i = 0; i < 5; i++)
    {
        printf(" %d", ar[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for ( j = i+1 ; j < 5; j++)
        {
            if (ar[i] > ar[j])
            {
                t=ar[i];
                ar[i] = ar[j];
                ar[j] = t;
            }
        }
    }

    printf("\nThe sorted array is: ");
    
    for (i = 0; i < 5; i++)
    {
        printf(" %d", ar[i]);
    }
    printf("\n");
}