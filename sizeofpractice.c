#include<stdio.h>
int main()
{
    int a = 10;
    char c = 'X';
    double val = 3.5;

    printf("size of a is %d\n", sizeof(a));
    printf("size of c is %d\n",sizeof(c));
    printf("size of val is %d\n",sizeof(val));

    printf("size of int is %d\n", sizeof(int));
    printf("size of long long is %d\n", sizeof(long long));

    int arr[] = {5, 3, 232, 67, 55, 26};
    printf("size of array is %d\n",sizeof(arr));

    int arr2[10] = {5, 52, 77, 573,67};
    printf("size of array2 is %d\n",sizeof(arr2));

    int mArr[] = {5, 523, 14, 6, 41, 53, 7, 743, 640};
    int len = sizeof(mArr) / sizeof(int);
    int len2 = sizeof(mArr) / sizeof(mArr[0]);
    printf("len is %d\n", len);
    printf("len2 is %d\n", len2);
}
