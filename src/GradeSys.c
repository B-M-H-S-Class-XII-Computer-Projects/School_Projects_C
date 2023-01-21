#include<stdio.h>

int main()
{
    float full, Pmarks, total;

    scanf("%f", &total, printf("Enter the total marks you got: "));
    scanf("%f", &full, printf("Enter the Full Marks: "));

    Pmarks = (total / full) * 100;

    if(Pmarks >= 80)
    {
        printf("A\n");
    }
    else if(Pmarks >= 60)
    {
        printf("B\n");
    }
    else if(Pmarks >= 40)
    {
        printf("C\n");
    }
    else if(Pmarks >= 30)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }
}