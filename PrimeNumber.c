#include<stdio.h>
int main()
{
	int number,c,bati=0;
	printf("Enter your number: ");
	scanf_s("%d", &number);
	for (c = 2; c <= (number - 1); c++)
	{
		if (number%c == 0)
		{
			bati = 1;
			break;
		}
		
	}
	if (bati == 0)     //always use == to check if equal
	{
		printf("The number %d is prime", number);
	}
	else
	{
		printf("The number %d is not prime", number);
	}
}