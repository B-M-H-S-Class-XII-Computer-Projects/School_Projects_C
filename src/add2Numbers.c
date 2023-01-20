#include<stdio.h>

int main()
{
    float no1, no2, sum = 0;  // Declare variables for two numbers and their sum
    
    printf("Enter the first number:- ");  // Prompt user for first number
    scanf("%f", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user for second number
    scanf("%f", &no2);  // Read second number from user input
    
    sum = no1 + no2;  // Calculate the sum of the two numbers
    
    printf("\nThe sum of %f and %f is %f", no1, no2, sum);  // Print the sum
    
    return(0);  // End the program
}
