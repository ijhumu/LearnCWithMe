#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter a number : ");
    scanf("%d",&number);


    while(number>0)
    {
        {
           // if(number>0)
           // {
                count++;
           // }
           // else
           // {
            //    break;
           // }
            number=number/10;

        }

    }

    printf("Total digits : %d",count);

}
