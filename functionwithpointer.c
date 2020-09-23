#include<stdio.h>

void printAdding5(int val)
{
    val += 5;
    printf("total value %d\n", val);
}

void printAdding5UsingPointer(int *pVal)
{
    *pVal += 5;
    printf("total value %d\n", *pVal);
}

int add10WithMe(int val)
{
    return val + 10;
}

void add10WithUs(int *a, int *b)
{
    *a += 10;
    *b += 10;
}

int main()
{
    int x = 10;

    printf("value before function call %d\n", x);

    //printAdding5(x);
    printAdding5UsingPointer(&x);

    printf("value after function call %d\n", x);

    int a = 100;
    int b = 200;
    a = add10WithMe(a);
    b = add10WithMe(b);
    printf("current value of a is %d\n", a);
    printf("current value of b is %d\n", b);

    add10WithUs(&a, &b);

    printf("current value of a is %d\n", a);
    printf("current value of b is %d\n", b);


}
