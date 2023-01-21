#include<stdio.h>

int main()
{
    int s=0, i=1;

    while (i<=10)
    {
        s=s+i;
        i++;
    }
    printf("SUM = %d\n", s);
}