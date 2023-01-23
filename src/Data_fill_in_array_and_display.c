#include<stdio.h>

int main()
{
    int ar[5], i;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i], printf("Enter your data: "));
    }

    printf("You have entered: ");
    for ( i = 0; i < 5; i++)
    {
        printf(" %d", ar[i]);
    }
    printf("\n");
}