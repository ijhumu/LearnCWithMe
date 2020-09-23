#include<stdio.h>
#include<math.h>
int getFirstDigit(int number)
{


    while(number>10)
    {
        number=number/10;


    }
    return number;
}
int getLastDigit(int number)
{
    int mod;
    mod=number%10;

    return mod;
}
void checkDigit(int number)
{
     int count=0,sum=0,mod;
        while(number>0)
    {
        count++;
        mod=number%10;
        sum=sum+mod;
        number=number/10;
    }
    printf("The sum of all digits : %d\n",sum);
    printf("The number of digits : %d\n",count);
}
void swapDigit(int number)
{
    int firstDigit,lastDigit,swapNum;
    int count=0,mod,number2;
    int x=number;
    while(number>0)
    {
        count++;
        number=number/10;
    }

    firstDigit=x/pow(10,(count-1));
    lastDigit=x%10;
    int p=(pow(10,(count-1))*firstDigit);
    //printf("%d",p);

    number2=(x%p)-lastDigit;
    swapNum=(lastDigit*pow(10,(count-1)))+number2+firstDigit;

    printf("After swapping first and last digit : %d",swapNum);


}
int main()

{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    checkDigit(number);
      printf("The first digit : %d\n",getFirstDigit(number));

      printf("The last digit : %d\n",getLastDigit(number));
      swapDigit(number);

}
