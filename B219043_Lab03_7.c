#include<stdio.h>
int main()
{
	printf("Enter in inches:  ");
	float i;
	scanf("%f",&i);
	printf("Measurement in foot= %.2f\n",i/12.0);
	printf("Measurement in yard= %.2f\n",i/36.0);
	printf("Measurement in centimeter= %.2f\n",i*2.54);
	printf("Measurement in meter= %.2f\n",i/39.37);
	return 0;
}