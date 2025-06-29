// Name: loan.c
// Purpose: calculates the remaining balance on a loan after first, second and third monthly payments, but there is an interest
// Author: W. Y. Kyaw
// loan amount = (loan amount - monthly payment) + (loan amount * monthly interest rate)

#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_interest_rate, monthly_payment;
	int payment_term;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	monthly_interest_rate = interest_rate / (100 * 12);
	
	// printf("Payment terms: ");
	// scanf("%d", &payment_term);

	loan_amount = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
	printf("Balance remaining after first payment: %.2f\n", loan_amount);
	loan_amount = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
	printf("Balance remaining after second payment: %.2f\n", loan_amount);
	loan_amount = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
	printf("Balance remaining after third payment: %.2f\n", loan_amount);

	
	return 0;
}

