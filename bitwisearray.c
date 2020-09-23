#include<stdio.h>
int andAll(int arr[],int size)
{

    int result=arr[0];


    for(int i=1;i<size;i++)
    {

      result=result&arr[i];
    }

    return result;
}
void printArr(int arr[30],int size)
{
    for(int k=0;k<size;k++)
    {
        printf("%d",arr[k]);
    }
}
int main()
{

    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[30];
    printf("Enter a number : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The and result is :%d",andAll(arr,size));
    //printArr(arr,size);

}
