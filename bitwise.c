#include<stdio.h>
int main()
{
    printf(" Hello World \n");
    for(int i=1;i<=10;i++)
    {
        printf(" %d ",i);
    }
    printf("\n");

    int a=4,b=2;
    int c=a & b;
    int d=a|b;
    int e=a^b;
    int f= ~a;
    int g=a<<1;
    int h=a>>1;
    printf(" %d\n",c);
    printf(" %d\n",d);
    printf(" %d\n",e);
    printf(" %d\n",f);
    printf(" %d\n",g);
    printf(" %d\n",h);

    //use case
    if(a&1)
    {
        printf(" ODD \n");
    }
    else
    {
        printf(" EVEN \n");
    }

    if(a^b)
    {
        printf(" NOT SAME \n");
    }
    else
    {
        printf(" SAME \n");
    }
    printf("a*4=%d\n",a<<2);
    printf("a*7=%d\n",(a<<2)+(a<<1)+a);
    printf("a*11=%d\n",(a<<3)+(a<<1)+a);
    printf("a/2=%d\n",a>>1);

}
