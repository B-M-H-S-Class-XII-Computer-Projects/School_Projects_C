#include<stdio.h>

int main()
{
    int i, n, is_prime = 1;

    scanf("%d", &n, printf("Enter a number: "));

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
        
    }

    if (is_prime == 0)
    {
        printf("Not Prime.\n");
    }
    
    else
    {
        printf("Prime.\n");
    }
}