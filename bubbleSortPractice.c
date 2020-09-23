#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int a[], int size)
{
    for(int i=0;i<size - 1; i++)
    {
        for(int j=0;j<size - 1 -i; j++)
        {
            if(a[j] < a[j+1])
            {
                //swap
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void print(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
      printf("%d  ",array[i]);
    }
    printf("\n");

}
int main()
{
    int arr[4] = {6, 4, 2, 3};

    print(arr,4);

    bubbleSort(arr, 4);

    print(arr,4);

}


/*
input : P J M S

//
J P M S
J M P S
J M S P

//
J M S P
J S M P

//
J S M P

---------

input : 5 3 8 4
//
3 5 8 4
3 5 8 4
3 5 4 8
//
3 5 4 8
3 4 5 8
//
3 4 5 8


-------
size = 4;

i = 3 (0, 1, 2) ...... for(int i=0;i<size-1;i++)
i = 0 -> j = 3
i = 1 -> j = 2
i = 2 -> j = 1
for(int j=0; j< size - 1 - i; j++)

*/
