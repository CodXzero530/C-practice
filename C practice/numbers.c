#include<stdio.h>
int main(void)
{
	int a, b, c, d;
	printf ("Enter a number: ");
	scanf ("%d", &a);
	printf ("Enter another number: ");
	scanf ("%d", &b);
	printf ("Enter a last number please: ");
	scanf ("%d", &d);
	c=a+b+d;
	printf ("\nThe sum of those numbers %d + %d + %d is: %d ", a, b, d, c);
	return 0;
}
