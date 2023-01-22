#include<stdio.h>

int main()
{
    int n, i=0;
    scanf("%d", &n, printf("Enter a number: "));

    while (n>0)
    {
        i++;
        n = n / 10;
    }

    printf("Number of digits present = %d\n", i);
    
}