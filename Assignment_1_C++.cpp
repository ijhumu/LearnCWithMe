#include<bits/stdc++.h>
using namespace std;

int main1()
{
    /// INSERT
    char s[100];
    int n;
    char c;

    printf("Enter a string : ");
    scanf("%s",s);
    printf("Enter index number :");
    scanf("%d",&n);
    printf("Enter a character :");
    scanf(" %c",&c);
    int len=strlen(s);
    for(int i=len;i>=n;i--)
    {
       s[i+1]=s[i];
    }
    s[n]=c;
    printf("%s",s);
}

int main2()
{
    ///strlen
    char s[100];
    int cnt=0;

    printf("Enter a string :");
    scanf("%s",s);

    for(int i=0;s[i]!='\0';i++)
    {
        cnt++;
    }
    printf("The length of %s is %d",s,cnt);
}

int main3()
{
    ///strcmp
    char s1[100],s2[100];

    printf("Enter two string :");
    scanf("%s %s",s1,s2);
    printf("First string =%s, Second string=%s\n",s1,s2);

    int len1=strlen(s1);
    int len2=strlen(s2);

    if(len1!=len2)
    {
        printf("Not Equal");
    }
    else
    {

    int cmp;
    int len=strlen(s1);
    for(int i=0;i<=len;i++)
    {
        if(s1[i]!=s2[i])
        {
           cmp=0;
           break;
        }
        else
        {
            cmp=1;
        }
    }
    if(cmp==1)
    {
        printf("Equal");
    }
    else if(cmp==0)
    {
        printf("Not Equal");
    }
    }
}

int main4()
{
    ///strcpy
    char s1[100],s2[100];

    printf("Enter a string :");
    scanf("%s",s1);

    int len=strlen(s1);
    for(int i=0;i<=len;i++)
    {
        s2[i]=s1[i];
    }


    printf("After copy: %s",s2);
}

int main5()
{
    ///strcat
    char s1[100],s2[100];
    printf("Enter two string :");
    scanf("%s %s",s1,s2);

    int lens1=strlen(s1);
    int lens2=strlen(s2);
    int totalLen=lens1+lens2;

    for(int i=0;i<lens1;i++)
    {
        s2[i+lens2]=s1[i];
    }
    s2[totalLen]=0;
    printf("%s",s2);

}

int main6()
{
    ///reverse
    char s[100];
    int index1,index2;
    printf("Enter a string: ");
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len/2;i++)
    {
        char temp=s[i];
       s[i]=s[len-1-i];
       s[len-1-i]=temp;
    }

    printf("After reverse : %s",s);
}

int main7()
{
    ///substrcpy
  char s1[100],s2[100];
  int st,en;

  printf("Enter a string :");
  scanf("%s",s1);
  printf("Enter start and end index : ");
  scanf("%d %d",&st,&en);
  int totalChar= en-st+1;
  for(int i=0;i<=totalChar;i++)
  {
      s2[i]=s1[i+st];
  }
  s2[totalChar]=0;
  printf("After copy : %s",s2);

}
