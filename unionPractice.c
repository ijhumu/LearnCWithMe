#include<stdio.h>
union Tshirt
{
    //char color[10];
    int size;
    double price;
};
int getMaxSize(union Tshirt shirt[],int arrsize)
{
    int max=0;
    for(int i=0;i<arrsize;i++)
    {
        if(max<shirt[i].size)
        {
            max=shirt[i].size;
        }
    }
    return max;
}


int main()
{
   union Tshirt myTshirt;

   myTshirt.size = 32;
   myTshirt.price = 200;

   printf("Size is %d and price is %f\n",myTshirt.size,myTshirt.price);

   union Tshirt myjama[2];
   printf("Enter the followings :\n ");
   for(int i=0;i<2;i++)
   {
       printf("Enter size :");
       scanf("%d",&myjama[i].size);
       printf("Enter price :");
       scanf("%lf",&myjama[i].price);
   }
   for(int i=0;i<2;i++)
   {
       printf("Size of tshirt no. %d is %d\n",i,myjama[i].size);
       printf("price of tshirt no. %d is %f\n",i,myjama[i].price);
   }

   printf("Max size is %d",getMaxSize(myjama,2));

}
