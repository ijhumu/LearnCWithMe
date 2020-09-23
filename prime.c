#include<stdio.h>
int main()
{
    int number,prime=1;
    printf("Enter a number : ");
    scanf("%d",&number);
    for(int i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            prime=0;
        }
    }
    if(prime==1)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }

    int start,end,prime2,sum=0;
    printf("Enter the first number : \n");
    scanf("%d",&start);
    printf("Enter the last number : \n");
    scanf("%d",&end);
    printf("All prime numbers between %d to %d is :",start,end);
    for(int j=2;j<=end;j++)
    {
        prime2=1;
        for(int k=2;k<=j/2;k++)
        {
            if(j%k==0)
            {
                prime2=0;
                break;
            }
        }
        if(prime2==1)
        {
            printf(" %d\n",j);
            sum=sum+j;
        }
    }
    printf("The sum is : %d\n",sum);
    int prime3,number2;
    printf("Enter a number :");
    scanf("%d",&number2);
    printf("Prime factors of %d\n : ",number2);
    for(int x=2;x<=number2;x++)
    {
        if(number2%x==0)
        {
            prime3=1;
            for(int y=2;y<=x/2;y++)
            {
                if(x%y==0)
                {
                    prime3=0;
                }
            }

        if(prime3==1)
        {
            printf("%d ",x);
        }
        }
    }
}
