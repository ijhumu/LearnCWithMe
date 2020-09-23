#include<stdio.h>
void getSwapped(char number[1000])
{
    int mod;
    while(number>0)
    {
      mod=number%10;
      printf("%d",mod);
      number=number/10;
    }

}
int main()
{
    int a=100,b=50;
    printf("%d %d\n",a,b);
    int x;
    x=a;
    a=b;
    b=x;

    printf("%d %d\n",a,b);
    char number[1000];
    printf("Enter a number : ");
    scanf("%s",number);
    getSwapped(number);
}
