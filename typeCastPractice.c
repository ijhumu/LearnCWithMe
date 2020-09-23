#include<stdio.h>
int main()
{
    double value=10.3;
    printf("%f\n",value);

    //explicit casting
    printf("%d\n",(int)value);

    int a=3;
    int b=2;
    double c=(double)a/b;
    printf("%f\n",c);

    char ch='A';
    printf("%d\n",(int)ch);

    int myVal=100;
    printf("%c\n",(char)myVal);


    //implicit casting(nije bujhbe)

    int x=10;
    char p='A';
    int y=x+p;
    printf("%d\n",y);
}

