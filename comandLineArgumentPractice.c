#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("number of argument %d\n", argc);
    /*
    for(int i=0;i<argc;i++)
    {
        printf("%s\n", argv[i]);
    }
    */
    printf("Welcome %s :D\n", argv[1]);
}
