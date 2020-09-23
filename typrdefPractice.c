#include<stdio.h>

struct Person
{
    int age;
    double height;
};

typedef struct Person Person;


typedef int amar_mon_chaise;

typedef struct Tshirt
{
    int size;
    double price;
}jama;

int main()
{
    amar_mon_chaise value=10;
    printf("moner moto value = %d\n",value);

    Person person;

    person.age=10;
    person.height=123;

    printf("%d age, %f height\n",person.age,person.height);

    jama kapor;
    kapor.size=24;
    kapor.price=200;

    printf("size %d, price %f\n",kapor.size,kapor.price);
}
