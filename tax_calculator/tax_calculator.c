// Name: tax_calculator.c
// Purpose: calculates tax based on the user input of amount and tax percentage
// Author: W. Y. Kyaw
// Formula
//	Total amount = amount + (amount * tax percentage)


#include <stdio.h>

int main(void)
{
	float amount, tax_percentage;
	char currency[5];
	printf("Enter the amount: ");
	scanf("%f", &amount);
	printf("Enter tax in percentage: ");
	scanf("%f", &tax_percentage);
	printf("Enter currency: ");
	scanf("%s", currency);
	
	printf("-------------------\n");
	printf("Total amount: %.2f %s.\n", amount + (amount * tax_percentage/100), currency);
	return 0;
}
