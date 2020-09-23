#include<stdio.h>
#define DAYS_IN_WEEK 7
#define SUM(a,b)(a+b)
#define square(x)((x)*(x))

int numberOfDays(int weekCount)
{
    return DAYS_IN_WEEK*weekCount;
}

int numberOfHours(int weekCount)
{
    return DAYS_IN_WEEK*weekCount*24;
}

int main()
{
   printf("%d\n",DAYS_IN_WEEK);

   printf("%d\n",numberOfDays(5));

   printf("%d\n",numberOfHours(5));

   #ifdef DAYS_IN_WEEK
   printf("defined\n");
   #endif // DAYS_IN_WEEK

   #ifndef DAYS_IN_WEEK
   printf("defined\n");
   #endif // DAYS_IN_WEEK

   printf("File :%s\n",__FILE__);
   printf("Date :%s\n",__DATE__);
   printf("Time :%s\n",__TIME__);
   printf("Line :%d\n",__LINE__);

   printf("%d\n",SUM(5,3));
   printf("%d\n",square(5));
}
