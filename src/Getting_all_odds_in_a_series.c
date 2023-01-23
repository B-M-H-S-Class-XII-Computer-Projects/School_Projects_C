#include <stdio.h>

int main()
{
    int i, n;
    
    scanf("%d", &n, printf("Print odd numbers till: "));

    printf("All odd numbers from 1 to %d are: ", n);

    for(i=1; i<=n; i+=2)
    {
        printf(" %d", i);
    }
    printf("\n");
}