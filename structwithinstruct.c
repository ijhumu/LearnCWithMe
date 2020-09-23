#include<stdio.h>

struct Tshirt
{
    char color[10];
    int size;
    double price;
};

struct Mobile
{
    char brand[30];
    int memory;
    double price;
};

struct Person
{
    char mane[30];
    int age;
    double weight;
    struct Tshirt shirt;
    struct Mobile mobile;
};
int main()
{
    struct Person jhupu;

    jhupu.age=4;
    jhupu.weight=15.0;
    jhupu.shirt.size=24;
    jhupu.shirt.price=500;
    jhupu.mobile.memory=32;
    jhupu.mobile.price=20000;

    printf("price of jhupu's shirt : %f \n",jhupu.shirt.price);

    struct Person *p;
    p=&jhupu;
    p->shirt.size = 26;
    (*p).shirt.price = 650;

    printf(" price of jhupu's shirt is %f and size is %d \n",jhupu.shirt.price,jhupu.shirt.size);

    printf(" size of person : %d",sizeof(jhupu));
}
