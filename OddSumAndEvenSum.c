#include<stdio.h>
int main()
{
	int n, evensum=0,oddsum=0,totalsum=0;
	for (n = 1; n <= 10; n++)
	{
		//printf("Enter the numbers : ");
		//scanf_s("%d %d %d %d %d", &n, &n, &n, &n, &n);

		if (n % 2 == 0)
		{
			evensum = evensum + n;
	
		}
		else
		{
			oddsum = oddsum + n;
			
		}
		totalsum = totalsum + n;
	}
	printf("evensum:%d\n", evensum);
	printf("oddsum:%d\n", oddsum);
	//totalsum = totalsum + n;
	printf("The total sum is:%d\n", totalsum);
	if (totalsum = evensum + oddsum)
	{
		printf("correct");
	}
	else
	{
		printf("wrong");
	}
}
