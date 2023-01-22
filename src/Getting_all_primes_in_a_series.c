#include<stdio.h>

int main()
{
    int i, n, is_prime, j;

    scanf("%d", &n, printf("Enter the last limit: "));

    printf("All the prime digits are: ");
    for (i = 1; i <= n; i++)
    {
        is_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
            
        }

        if (is_prime == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}