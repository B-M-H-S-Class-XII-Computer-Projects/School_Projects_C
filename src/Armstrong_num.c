#include<stdio.h>

int main()
{
    int r, n, s=0, temp;
    
    scanf("%d",&n, printf("Enter a number: "));

    temp = n;

    while (n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }

    if (temp == s)
    {
        printf("Armstrong number.\n");
    }

    else
    {
        printf("Not armstrong number.\n");
    }
    
}