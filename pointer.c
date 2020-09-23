#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;

    printf("The value of a= %d\n",a);
    printf("The address of a=%d\n",&a);
    printf("The value of pointed a=%d\n",*p);
    printf("The address of p=%d\n",&p);
    printf("The value of p=%d\n\n\n",p);




    int num1,num2,sum,dif,amount;
    int *p1=&num1;
    int *p2=&num2;

    printf("Enter two values : \n");
    scanf("%d%d",&num1,&num2);
    sum=*p1+*p2;
    printf("The sum is : %d\n",sum);
    dif=*p1-*p2;
    printf("The difference is : %d\n",dif);
    amount=*p1 * *p2;
    printf("The amount is : %d\n\n\n",amount);





    int x=10,y=20,temp;
    int *p3=&x,*p4=&y;
    printf("Before swapping x=%d and y=%d\n",x,y);
    temp=&x;
    p3=&y;
    p4=temp;
    printf("After swapping x=%d and y=%d\n",*p3,*p4);




    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    int q[size];
    int *p5=&q;
    printf("Enter the values : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",p5);
        p5++;
    }
    p5=&q;
    for(int j=0;j<size;j++)
    {
        printf("%d, ",*p5);
        p5++;
    }


}
