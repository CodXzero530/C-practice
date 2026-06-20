#include<stdio.h>
int main(void)
{
	int b;
	printf("Please enter a number: ");
	scanf("%d", &b);
	if (b < 0)
	{
		printf("You've Entered a negative number\n");
	}
	else if (b == 0)
	{
		printf("the value is zero\n");
	}
	else
		{
		printf("the value is positive");
		}
	return 0;
}
