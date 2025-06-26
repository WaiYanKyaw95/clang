// Name: converter.c
// Purpose: Converts fahrenheit temperature into celsius temperature
// Author: W. Y. Kyaw
// Freezing point = 32.0
// Scale factor = 5.0 / 9.0
// Temperature in Celsius = (Temperature in Fahrenheit - Freezing point) * Scale factor


#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celsius;
	printf("This application will help you convert temperature in Fahrenheit to Celsius\n");
	printf("***************************************************************************************\n");	
	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	printf("Temperature in Celsius: %.1f\n", celsius);
	return 0;
}	
	
