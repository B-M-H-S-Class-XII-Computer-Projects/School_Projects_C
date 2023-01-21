#include <stdio.h>

int main()
{
	float c, f;
	printf("Enter farenheit value: ");
	scanf("%f", &f);
	
	c = (5*f - 160) / 9;
	
	printf("Celcius Value: %f", c);
	rerurn(0);
}
