#include<stdio.h>
int main(void)
{
	float a, b;
	a = 0;
	b = -1;
	int c;
	printf ("give me a range to which you want the temp conv (multiple of 10): ");
	scanf ("%d", &c);
	printf("\n");
	printf ("FARENHEIT TO CELSIUS CONVERSION TABLE\n");
	printf("\n");
	while (a <= c)
	{
		if ((a > 98.6) && (b < 98.6))
		{
			printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32) * 5 / 9);
		}
		printf("%6.2f degrees F = %6.2f degrees C\n", a, (a - 32) * 5 / 9);
		b = a;
		a = a + 10;
	}
	return 0;
}
