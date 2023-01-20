#include<stdio.h>
int main()
{
    float celsius, fahrenheit;  // Declare variables for temperature in Celsius and Fahrenheit scales
    
    printf("Enter the temperature in fahrenheit scale:- ");  // Prompt user to enter temperature in Fahrenheit
    scanf("%f", &fahrenheit);  // Read temperature in Fahrenheit from user input
    
    // Convert temperature to Celsius using the conversion formula
    celsius = (fahrenheit - 32) * 5/9; 
    
    printf("\nThe temperature in celsius scale is %f", celsius);  // Print the temperature in Celsius
    
    return(0);  // End the program
}
