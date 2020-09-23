#include<stdio.h>
void print(int myArr2D[][3])
{

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",myArr2D[i][j]);
        }
        printf("\n");
    }
}
int sum2dArr(int myArr2D[][3])
{
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+myArr2D[i][j];
        }

    }
   return sum;
}
int getMax1D(int arr1D[])
{
    int maxValue=arr1D[0];
    for(int i=0;i<5;i++)
    {
        if(maxValue<arr1D[i])
        {
            maxValue=arr1D[i];
        }

    }
    return maxValue;

}
int getMax2D(int myArr2D[2][3])
{
    int maxValue2D=myArr2D[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(maxValue2D<myArr2D[i][j])
            {
                maxValue2D=myArr2D[i][j];
            }
        }

    }
    return maxValue2D;
}
int getMin1D(int arr1D[])
{
    int minvalue=arr1D[0];
    for(int i=0;i<5;i++)
    {
        if(minvalue>arr1D[i])
        {
            minvalue=arr1D[i];
        }
    }
    return minvalue;
}
int getMin2D(int myArr2D[][3])
{
    int minValue=myArr2D[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(minValue>myArr2D[i][j])
            {
                minValue=myArr2D[i][j];
            }
        }
    }
    return minValue;

}
int main()
{
    //********** Initialization *******
    //1d Array
    int arr1D[5] = {1, 3, 5, 7, 2};

    printf("value at index 2 is :%d\n", arr1D[2]);

    int arr2D[3][4] = {
        {1,2,3,4},
        {4,5,6,7},
        {10, 11,12,13}
        };
    printf("Value at row 1,column 2 is : %d\n",arr2D[1][2]);

    int array1D[] = {1,2,3,2,9};

    int array2D[][4] = {{2,3,4,5}, {5,2,7,9}, {2,10,31,5}};

    int array2DAgain[][4] = {2, 3, 56, 2, 6, 7, 9, 11, 4, 8, 9, 19};
    printf("value at row 1,column 2 : %d\n",array2D[1][2]);
    printf("row 2,column 0 : %d\n",array2DAgain[2][0]);


    //********** Print *****
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<4;j++)
        {

            printf("%d ", arr2D[i][j]);
        }

        printf("\n");
    }
    int myArr2D[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&myArr2D[i][j]);
        }
    }
    print(myArr2D);
    printf("The sum : %d\n",sum2dArr(myArr2D));
    printf("The max : %d\n",getMax1D(arr1D));
    printf("The max2D : %d\n",getMax2D(myArr2D));
    printf("The min1D : %d\n",getMin1D(arr1D));
    printf("The min2D : %d\n",getMin2D(myArr2D));


}
