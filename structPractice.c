#include<stdio.h>

struct Person
{
    //property
    int age;
    double weight;
    char gender;
    char *city;
};
struct Mobile
{
    double price;
    char *brand;
    char *colour;
    int memory;
};

int main()
{
    int ageJhupu = 4;
    double weightJhupu = 15.0;

    int agePritam = 10;
    double weightPritam = 30.0;


    struct Person jhupu;
    struct Person pritam;

    jhupu.age = 4;
    jhupu.weight = 15.0;
    jhupu.gender = 'F';
    jhupu.city = "Dhaka";

    pritam.age = 10;
    pritam.weight = 30.0;
    pritam.gender = 'M';
    pritam.city = "Chattogram";

    printf("Pritam is %d years old, weight is %f,gender is %c, city is %s\n", pritam.age, pritam.weight, pritam.gender, pritam.city);
    printf("Jhupu is %d years old, weight is %f,gender is %c, city is %s\n", jhupu.age, jhupu.weight, jhupu.gender, jhupu.city);

    struct Mobile mymo;

    mymo.price = 20000;
    mymo.brand = "MI";
    mymo.colour ="Black";
    mymo.memory = 32;

    printf("MyMo price is %f, brand is %s, colour is %s, memory is %d\n",mymo.price, mymo.brand, mymo.colour, mymo.memory);
}
