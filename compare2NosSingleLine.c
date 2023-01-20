#include<stdio.h>
int main()
{
    float no1, no2;  // Declare variables for two numbers
    
    printf("Enter the first number:- ");  // Prompt user to enter the first number
    scanf("%f", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user to enter the second number
    scanf("%f", &no2);  // Read second number from user input
    
    // Compare the two numbers using ternary operator and print the greater number
    printf("%f is greater", (no1 >= no2?no1:no2)); 
    
    return (0); //End of program
}
