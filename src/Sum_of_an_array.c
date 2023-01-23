#include<stdio.h>

int main()
{
    int i, ar[4], s=0;

    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&ar[i], printf("Enter your data to add: "));
        s=s+ar[i];
    }
    printf("SUM = %d\n", s);
}