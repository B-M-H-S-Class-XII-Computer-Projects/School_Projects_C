#include<stdio.h>

int main()
{
    int a, b, c; /*TAKING 3 VARIABLES*/
    printf("Enter 3 numbers: "); /*GETTING THIR INPUT*/
    scanf("%d%d%d", &a, &b, &c); /*PUTIING THEM INTO THEIR REPECTIVE ADDRESS*/

    /*LOGIC STARTS*/
    if (a>b)
    {
        if(a>c)
        {
            printf("%d is greater.\n", a);
        }
        else
        {
            printf("%d is greater.\n", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greater.\n", b);
        }
        else
        {
            printf("%d is greater.\n",c);
        }
    }
}