#include<stdio.h>
int main()
{
    float no1, no2;  // Declare variables for two numbers
    
    printf("Enter the first number:- ");  // Prompt user to enter the first number
    scanf("%f", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user to enter the second number
    scanf("%f", &no2);  // Read second number from user input
    
    // Compare the two numbers
    if(no1>no2)
    {
        printf("%f is greater", no1); // If first number is greater, print it
    }
    else if (no2>no1)
    {
        printf("%f is greater", no2); // If second number is greater, print it
    }
    else
    {
        printf("Both numbers are equal"); // If both numbers are equal, print the statement
    }
    return (0); // End of program
}
