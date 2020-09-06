#include<stdio.h>
int main()
{
	float c[5];
	float f;
	printf("Enter 1st Celsius : ");
	scanf_s("%f", &c[0]);
	printf("Enter 2nd Celsius : ");
	scanf_s("%f", &c[1]);
	printf("Enter 3rd Celsius : ");
	scanf_s("%f", &c[2]);
	printf("Enter 4th Celsius : ");
	scanf_s("%f", &c[3]);
	printf("Enter 5th Celsius : ");
	scanf_s("%f", &c[4]);

	int i = 0;
	while (i <=4)
	{
		f = (9 * c[i] / 5) + 32;
		printf("%.2f Celsius --> %.2f Fahrenheit\n", c[i], f);
		i++;
	}
	return 0;
}