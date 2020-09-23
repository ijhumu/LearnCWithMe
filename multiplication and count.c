#include<stdio.h>
int main()
{
    int number,i,mul;
    printf("Enter the number : ");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        mul=i*number;
        printf("%2d X %2d = %2d\n",i,number,mul);

    }
    printf("\n");

}
