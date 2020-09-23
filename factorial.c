#include<stdio.h>
int main()
{
    int number,factorial=1;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("The factorial of %d is : ",number);
    for(int i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
}
