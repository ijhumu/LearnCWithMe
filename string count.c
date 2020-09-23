#include<stdio.h>
int isVowel(char c)
{

     if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
     {
      return 1;
     }
     else
     {
        return 0;
     }
}
int printVowelAndCons(char s[30])
{
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(isVowel(s[i]))
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("No vowel found");
    }
    else
    {
        printf("The number of vowels in %s is %d\n",s,count);
    }
    printf("The number of consonents in %s is %d\n",s,i-count);
    return i;
}

int main()
{
   char s[30];
   int i;
   printf("Enter a word : ");
   scanf("%s",&s);
   //printf("The number of letters : %d",i);
  // printVowelAndCons(s);
  // int len=printVowelAndCons(s);
   printf("The number of letter : %d",printVowelAndCons(s));

   printf("\n");

   printf("check %d\n",isVowel('A'));



}
