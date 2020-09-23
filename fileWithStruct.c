#include<stdio.h>

struct Person
{
    char name[30];
    int age;
};
int main()
{
    struct Person jhupu;

    printf("Enter your name and age:\n");
    scanf("%s %d", jhupu.name, &jhupu.age);

    FILE *fptr;
    fptr = fopen("jhupu.txt", "w+");
    fprintf(fptr,"%s %d",jhupu.name,jhupu.age);

    rewind(fptr);

    //fgets(jhupu.name, 50, fptr);
    fscanf(fptr, "%s %d", jhupu.name, &jhupu.age);
    printf("name %s, age %d\n", jhupu.name, jhupu.age);

    fclose(fptr);
}
