#include<stdio.h>
int getProduct(int number)
{
    int product=1,mod;
    while(number>0)
    {
        mod=number%10;
        product=product*mod;
        number=number/10;
    }
    return product;

}
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("product of the number is : %d",getProduct(number));

}
