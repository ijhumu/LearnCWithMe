#include<stdio.h>
void printMatrix(int row,int col,int mat[row][col])
{

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

}
void multiMatrix(int row1,int col1,int row2,int col2,int mat1[row1][col1],int mat2[row2][col2])
{
    int matAB[row1][col2];
    if(col1==row2)
    {


    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            int sum=0;
            for(int k=0;k<col1;k++)
            {

                sum=sum+mat1[i][k]*mat2[k][j];

            }
            matAB[i][j]=sum;
            printf("%3d  ",matAB[i][j]);


        }
        printf("\n");
    }

    }
    else
            {
                printf("Can not multiply");
            }

}
int main()
{
    int ra,ca;
    printf("Enter the values of Row and Column of matrixA :  ");
    scanf("%d %d",&ra,&ca);
    int matA[ra][ca];
    printf("Enter the values : ");
    for(int i=0;i<ra;i++)
    {
        for(int j=0;j<ca;j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("\n\n Matrix A \n\n");
    printMatrix(ra,ca,matA);

    int rb,cb;
    printf("Enter the values of Row and Column of matrixB :  ");
    scanf("%d %d",&rb,&cb);
    int matB[rb][cb];
    printf("Enter the values : ");
    for(int i=0;i<rb;i++)
    {
        for(int j=0;j<cb;j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    printf("\n\n Matrix B \n\n");
    printMatrix(rb,cb,matB);
     int matAB[ra][cb];
    printf("\n\n Matrix AB \n\n");
    multiMatrix(ra,ca,rb,cb,matA,matB);

}



