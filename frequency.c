#include<stdio.h>
int main()
{
    int number,num,freq[10],mod,i;
    printf("Enter a number : ");
    scanf("%d",&number);
    num=number;
    for(i=0;i<10;i++)
    {
        freq[i]=0;
    }
    while(number>0)
    {
        mod=number%10;
        freq[mod]++;
        number=number/10;
    }
    printf("Frequency of %d\n : ",num);
    for(i=0;i<10;i++)
    {

    printf(" %d -> %d\n",i,freq[i]);
    }

}
