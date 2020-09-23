#include<stdio.h>
void printArr(int arr[])
{

    for(int j=0;j<10;j++)
    {
        printf("%d  ",arr[j]);
    }

}
int getSum(int arr[])
{
    int sum=0;
    for(int i=0;i<10;i++)
    {


    sum=sum+arr[i];
    }
    return sum;
}
int oddEven(int arr[])
{
    int evensum=0,oddsum=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            evensum=evensum+arr[i];
        }
        else
        {
            oddsum=oddsum+arr[i];
        }
    }
    return (evensum-oddsum);
}

int main()
{
    int arr[10];
    printf("Enter a number : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArr(arr );
    printf("The sum : %d\n",getSum(arr));
    printf("the difference : %d",oddEven(arr));
}
