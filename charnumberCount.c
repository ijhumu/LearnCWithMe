#include<stdio.h>
int charCount(char s[30])
{
    int charCount[26]={0},i;
    for(i=0;s[i]!='\0';i++)
    {
        int index=s[i]-'a';
        charCount[index]++;
    }
    for(int j=0;j<26;j++)
    {
        if(charCount[j]>0)
        {
            printf("%c -> %d\n",j+'a',charCount[j]);
        }
    }
}
int maxCount(char s[30])
{
    int charCount[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        int index=s[i]-'a';
        charCount[index]++;
    }
    int maxValue=charCount[0];
    for(int j=0;j<26;j++)
    {
        if(charCount[j]>maxValue)
        {
            maxValue=charCount[j];
        }

    }
    printf("%d\n",maxValue);
}
char maxChar(char s[30])
{
    int charCount[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        int index=s[i]-'a';
        charCount[index]++;
    }
    int maxValue=charCount[0];
    for(int j=0;j<26;j++)
    {
        if(charCount[j]>maxValue)
        {
            maxValue=charCount[j];
        }
    }
    for(int k=0;k<26;k++)
    {
        if(charCount[k]==maxValue)
        {
            printf("%c  ",k+'a');
        }
    }
    printf("\n");
}
void numCount(char num[30])
{
  int count[10]={0};
    for(int i=0;num[i]!='\0';i++)
    {
       int index=num[i]-'0';
       count[index]++;
    }

    for(int j=0;j<10;j++)
    {
        if(count[j]>0)
        {
            printf("%c -> %d\n",j+'0',count[j]);
        }
    }

}

void maxNumCount(char num[30])
{
    int count[10]={0};
    for(int i=0;num[i]!='\0';i++)
    {
        int index=num[i]-'0';
        count[index]++;
    }
       int maxCount=count[0];
    for(int j=0;j<10;j++)
    {
        if(count[j]>maxCount)
        {
            maxCount=count[j];
        }
    }
    printf("%d\n",maxCount);



}
void maxNumber(char num[30])
{
    int count[10]={0};
    for(int i=0;num[i]!='\0';i++)
    {
        int index=num[i]-'0';
        count[index]++;
    }
    int maxCount=count[0];
    for(int j=0;j<10;j++)
    {
        if(count[j]>maxCount)
        {
            maxCount=count[j];
        }
    }
    for(int k=0;k<10;k++)
    {
        if(maxCount==count[k])
        {
            printf("%c  ",k+'0');
        }
    }
}


int main()
{


    char s[30];
    printf("Enter a word : ");
    scanf("%s",&s);
    charCount(s);
    maxCount(s);
    maxChar(s);

    char num[30];
    printf("Enter a number : ");
    scanf("%s",&num);
    numCount(num);
    maxNumCount(num);
    maxNumber(num);



}

