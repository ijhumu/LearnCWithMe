#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the last value : ");
    scanf("%d",&number);
    i=number;
    while(i>=1)
    {

        printf("%d  ",i);
        i--;
    }
}
