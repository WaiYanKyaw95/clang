// Name: change.c
// Purpose: calculates the number of change you have to give out using
//		20$, 10$, 5$ and 1$ bills
// Author: W. Y. Kyaw


#include <stdio.h>

int main(void)
{
	int input_amount, twenty_change, ten_change, five_change, one_change;
	printf("Enter a dollar amount: ");
	scanf("%d", &input_amount);
	if (input_amount / 20 >= 0) {
		twenty_change = input_amount / 20;
		input_amount = input_amount % 20;
	} if (input_amount / 10 >= 0) {
		ten_change = input_amount / 10;
		input_amount = input_amount % 10;
	} if (input_amount / 5 >= 0) {
		five_change = input_amount / 5;
		input_amount = input_amount % 5;
	} if (input_amount / 1 >= 0) {
		one_change = input_amount / 1;
		input_amount = input_amount % 1;
	}

	printf("$20 bills: %d\n", twenty_change);
	printf("$10 bills: %d\n", ten_change);
	printf("$5 bills: %d\n", five_change);
	printf("$1 bills: %d\n", one_change);
	return 0;
}
		
