#include<stdio.h>
int main()
{
    int number,i,j;
    printf("Enter the last value : ");
    scanf("%d",&number);
    printf("The even numbers : ");
    i=1;
    while(i<=number)
    {
            if(i%2==0)
            {
              printf(" %d  ",i);
            }

        i++;
    }
    printf("\n");
    printf("The odd numbers : ");
    j=1;
    while(j<=number)
    {
        if(j%2!=0)
        {
            printf(" %d  ",j);

        }
        j++;
    }
    printf("\n");
    int sum=0;
    for(int z=1;z<=number;z++)
    {
        sum=sum+z;
    }
    printf("The sum is : %d",sum);
    printf("\n");
    int evensum=0;
    for(int k=1;k<=number;k++)
    {
        if(k%2==0)
        {
            evensum=evensum+k;
        }
    }
    printf("The even sum is: %d ",evensum);
    printf("\n");
    int oddsum=0;
    for(int l=1;l<=number;l++)
    {
        if(l%2!=0)
        {
            oddsum=oddsum+l;
        }
    }
    printf("The odd sum is: %d",oddsum);
}
