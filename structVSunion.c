#include <stdio.h>

struct sPerson
{
    int age;
    double weight;
};

//AAAA____
//WWWWWWWW

union uPerson
{

    int age;
    double weight;
};

union City
{
    char name[34];
    int population;
    double averageAge;
};

//AAAAWWWWWWWW
//WWWWWWWW

struct city
{
    char name[28];
    double averageAge;
    int population;
   // int school;


};
int main()
{
    struct sPerson person1;
    union uPerson person2;

    person1.age = 30;
    person1.weight = 70.0;

    person2.age = 30;
    printf("person 2 age %d\n", person2.age);
    person2.weight = 70.0;
    printf("person 2 age %d\n", person2.age);


    printf("size %d, age %d, weight %f\n", sizeof(person1), person1.age, person1.weight);
    printf("size %d, age %d, weight %f\n", sizeof(person2), person2.age, person2.weight);

    printf("address %d %d\n", &person2.age, &person2.weight);
    printf("address %d %d\n", &person1.age, &person1.weight);

    union City dhaka;
    dhaka.population = 1413018;

    printf("size of city %d\n", sizeof(dhaka));

    struct city Dhaka;

    printf("size of city %d\n", sizeof(Dhaka));
}
