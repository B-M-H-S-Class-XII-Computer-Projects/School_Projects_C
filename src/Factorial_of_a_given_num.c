#include<stdio.h>

int main()
{
    int n, f=1;

    scanf("%d",&n, printf("Enter a number: "));

    for( ; n>1; n--)
    {
        f = f * n;
    }
    printf("Factorial = %d\n", f);
}