#include<stdio.h>
int main()
{
    float celsius, fahrenheit;  // Declare variables for temperature in Celsius and Fahrenheit scales
    
    printf("Enter the temperature in celsius scale:- ");  // Prompt user to enter temperature in Celsius
    scanf("%f", &celsius);  // Read temperature in Celsius from user input
    
    fahrenheit = (celsius * 9/5) + 32;  // Convert temperature to Fahrenheit using the conversion formula
    
    printf("\nThe temperature in fahrenheit scale is %f", fahrenheit);  // Print the temperature in Fahrenheit
    
    return(0);  // End the program
}
