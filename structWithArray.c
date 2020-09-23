#include<stdio.h>

struct Tshirt
{
    char colour[30];
    int size;
    double price;
};


//size
//30 + (2)
//4 + (4)
//8



int getMax(int arr[], int size)
{
    int max=0;
    for(int i=0;i<3;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
       }
    }
    return max;
}


int getMaxSize(struct Tshirt tshirt[],int arrSize)
{
    int max=0;
    for(int i=0;i<arrSize;i++)
    {
        if(max<tshirt[i].size)
        {
            max=tshirt[i].size;
        }
    }
    return max;
}

int main()
{
    /*
    struct Tshirt myTshirt;

    myTshirt.colour = "black";
    myTshirt.size = 30;
   myTshirt.price = 500;

    printf("The colour of the tshirt is %s,size is %d,price is %f\n",myTshirt.colour,myTshirt.size,myTshirt.price);
*/
    struct Tshirt tshirtList[3];

    printf("Enter your choice : \n");
    for(int i=0;i<3;i++)
    {
        printf("Please enter color : ");
        scanf("%s", &tshirtList[i].colour);
        printf("size : ");
        scanf("%d",&tshirtList[i].size);
        printf("Price : ");
        scanf("%lf",&tshirtList[i].price);
    }

    printf("printing tshirts\n");
    for(int i=0;i<3;i++)
    {
        printf("color of tshirt no %d is %s\n", i, tshirtList[i].colour);
        printf("size of tshirt no %d is %d\n", i, tshirtList[i].size);
        printf("price of tshirt no %d is %f\n", i, tshirtList[i].price);
    }

    printf("Print total price\n");

    double total=0;

    for(int i=0;i<3;i++)
    {
       total=tshirtList[i].price+total;
    }
    printf("%f\n",total);

    printf("size of array %d\n", sizeof(tshirtList));
    printf("size of first tshirt %d\n", sizeof(tshirtList[0]));

    int sizeOfArray = sizeof(tshirtList)/sizeof(tshirtList[0]);
    printf("Size of array %d\n",sizeOfArray);
    printf("print max size\n");

    int ans=getMaxSize(tshirtList, sizeOfArray);
    printf("%d\n",ans);

    //struct with pointer
    //int *p = &arr; &arr[0]
    //*p = 10;
    struct Tshirt* pTshirt = &tshirtList;
    pTshirt->size = 100;
    printf("size of tshirtList[0] is %d\n", tshirtList[0].size);
    (*pTshirt).size = 120;
    printf("size of tshirtList[0] is %d\n", tshirtList[0].size);

    (pTshirt+2)->price = 95.0;
    (pTshirt+1)->size = 32;
    (*(pTshirt+0)).size = 10;

    printf("now max size ?");
    int currentMaxSize = getMaxSize(tshirtList, sizeOfArray);
    printf("max size %d\n", currentMaxSize);
}
