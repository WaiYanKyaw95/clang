// Name: dweight.c
// Purpose: Calculates the dimensional weight of a box
// Author: W. Y. Kyaw
// volume = width x length x height
// dimensional weight = (volume + 165) / 166


#include <stdio.h>

int main(void)
{
	int width, length, height, volume, weight;
	printf("Enter width: ");
	scanf("%d", &width);
	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter height: ");
	scanf("%d", &height);

	volume = width * length * height;
	weight = (volume + 165) / 166;
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	
}
