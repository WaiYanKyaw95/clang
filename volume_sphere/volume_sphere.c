// Name: volume_sphere.c
// Purpose: calculates the volume of a sphere
// Author: W. Y. Kyaw
// Formula
//	volume = (4/3) * 3.142 * r * r * r, where r = radius of the sphere


#include <stdio.h>
#define FACTOR (4.0f / 3.0f)
#define PI_SCALE 3.142f

int main(void)
{
	int radius; float volume;
	printf("Enter radius: ");
	scanf("%d", &radius);
	volume = FACTOR * PI_SCALE * radius * radius * radius;
	printf("The volume of the sphere with %d cm radius is %.2f cubic centimetre.\n", radius, volume);
	return 0;
}
