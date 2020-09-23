#include<stdio.h>

void add5(int *p, int size)
{
    for(int i=0;i<size;i++)
    {
        //*p += 5;
        p++;
    }
}

int main()
{
    int arr[5]={15,22,13,34,45};
    for(int i=0;i<5;i++)
    {
        printf("value at index %d is %d\n",i, arr[i]);
    }
    for(int i=0;i<5;i++)
    {
     printf("address at index %d is %d\n",i, &arr[i]);
    }

    int *pArr;

    pArr = &arr[0];
    printf("pArr %d\n", pArr);
    printf("*pArr %d\n", *pArr);

    pArr += 3; // pArr + 2
    printf("pArr %d\n", pArr);
    printf("*pArr %d\n", *pArr);

    pArr -=2; // pArr - 2
    printf("pArr %d\n", pArr);
    printf("*pArr %d\n", *pArr);

    for(int i=0;i<3;i++)
    {
        printf("i : %d, *pArr %d\n", i, *(pArr + i));
    }
    pArr = &arr[3];
    printf("pArr %d\n",pArr);
    printf("*pArr %d\n",*pArr);

    pArr = &arr;
    printf("pArr %d \n",*pArr);
    for(int i=0;i<5;i++)
    {
        printf("value at index %d is %d\n",i,*(pArr+i));
        //pArr++;
    }

    printf("=================\n");
    add5(&arr, 5);
    for(int i=0;i<5;i++)
    {

        printf("value at index %d is %d\n", i , arr[i]);
    }
}
