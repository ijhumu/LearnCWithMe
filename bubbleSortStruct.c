#include<stdio.h>

struct Person
{
    int age;
    double height;
    double weight;
};

void print(struct Person p[],int size)
{
   for(int i=0;i<size;i++)
   {
       printf("Person %d : Age %d Height %f Weight %f\n", i, p[i].age, p[i].height, p[i].weight);
   }
   printf("=================\n");
}

void swap(struct Person *p1, struct Person *p2)
{
    struct Person temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubbleSort(struct Person p[], int size)
{
   for(int i=0;i<size-1;i++)
   {
       for(int j=0;j<size-1-i;j++)
       {
           if((p[j].height > p[j+1].height) || (p[j].height == p[j+1].height && p[j].weight > p[j+1].weight))
           {
               swap(&p[j],&p[j+1]);
           }
       }
   }
}

int main1()
{
    struct Person person[5];

    person[0].age=9;
    person[1].age=2;
    person[2].age=4;
    person[3].age=16;
    person[4].age=7;

    person[0].height=23;
    person[1].height=45;
    person[2].height=23;
    person[3].height=20;
    person[4].height=25;

    person[0].weight=30;
    person[1].weight=34;
    person[2].weight=25;
    person[3].weight=45;
    person[4].weight=15;

    print(person, 5);

    bubbleSort(person, 5);

    print(person, 5);

}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
}
