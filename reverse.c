#include<stdio.h>
int main()
{
    int number,reverse=0,mod,Number;

    printf("Enter a number : ");
    scanf("%d",&number);
    Number=number;
    for(;;)
    {
        if(number==0)
        {
            break;
        }
        else
        {
            mod=number%10;
            reverse=reverse*10;
            reverse=reverse+mod;
            number=number/10;

        }
    }
    printf("the reverse number is : %d\n",reverse);

    if(reverse==Number)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
