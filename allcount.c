#include<stdio.h>
void allCount(char s[60])
{



   for(int x=0;s[x]!='\0';x++)
   {
       if(s[x]>='A' && s[x]<='Z')
       {

          int charCount[26]={0},i;

    for( i=0;s[i]!='\0';i++)
    {
         int index=s[i]-'A';

        charCount[index]++;

    }
    int maxValue1=charCount[0],j;
    for( j=0;j<26;j++)
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
          printf("%c ",k+'A');
        }
    }

   }
   else if(s[x]>='a' && s[x]<='z')
   {
       int charCount[26]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        int index=s[i]-'a';
        charCount[index]++;
    }
    int maxValue2=charCount[0];
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
   }
   else if(s[x]>=0 && s[x]<=9)
   {
        int count[10]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        int index=s[i]-'0';
        count[index]++;
    }
    int maxCount3=count[0];
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

   }
   if(maxValue1>=maxValue2 && maxValue1>=maxValue3)
   {

   }
}
int main()
{
    char s[60];
    printf("Enter something : ");
    scanf("%s",&s);
    allCount(s);
}
