#include<bits/stdc++.h>
using namespace std;

int triangle(int a,int b,int c)
{
    if(a+b > c && b+c > a && c+a > b) {
        if(a == b && b == c && c == a) {
            return 1;
        }
        else if(a == b || b == c || c == a) {
            return 2;
        }
        else {
            return 3;
        }
    }
    else {
        return 0;
    }
}

void divisible(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
           c++;
        }
    }
    printf("The divisible numbers between 1 to n : %d \n",c);
}

void strlen(char s1[],char s2[])
{
    int cnt1=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        cnt1++;
    }
    printf("The length of %s is %d\n",s1,cnt1);

    int cnt2=0;
    for(int i=0;s2[i]!='\0';i++)
    {
        cnt2++;
    }
    printf("The length of %s is %d\n",s2,cnt2);
}

void strcmp(char s1[],char s2[])
{
    int len1 =strlen(s1);
    int len2 =strlen(s2);

    if(len1!=len2)
    {
        printf("Not Equal\n");
    }
    else
    {

    int cmp;

    for(int i=0;i<=len1;i++)
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
        printf("Equal\n");
    }
    else if(cmp==0)
    {
        printf("Not Equal\n");
    }
    }
}


void strcpy(char s1[])
{
    char s3[100];
    int len=strlen(s1);
    for(int i=0;i<=len;i++)
    {
        s3[i]=s1[i];
    }


    printf("After copy: %s\n",s3);
}


void strcat(char s1[], char s2[])
{
    int lens1=strlen(s1);
    int lens2=strlen(s2);
    int totalLen=lens1+lens2;

    for(int i=0;i<lens1;i++)
    {
        s2[i+lens2]=s1[i];
    }
    s2[totalLen]=0;
    printf("%s\n",s2);
}


void substrcpy(char s1[])
{
    char s3[100];
    int st,en;

  printf("Enter start and end index : \n");
  scanf("%d %d",&st,&en);
  int totalChar= en-st+1;
  for(int i=0;i<=totalChar;i++)
  {
      s3[i]=s1[i+st];
  }
  s3[totalChar]=0;
  printf("After copy : %s\n",s3);

}


void Reverse(char s1[])
{
     int len1=strlen(s1);
    for(int i=0;i<len1/2;i++)
    {
       char temp1=s1[i];
       s1[i]=s1[len1-1-i];
       s1[len1-1-i]=temp1;
    }
    printf("After reverse : %s\n",s1);



}

void isPalindrome( char s1[])
{
    int len1 = strlen(s1);

    bool ok = true;
    for(int i=0, j=len1-1; i<j; i++, j--)
    {
        if(s1[i] != s1[j])
        {
            ok = false;
            break;
        }
    }

    if(ok) cout << "palindrome" << endl;
    else cout << "Not palindrome" << endl;


}
int main()
{
    int a,b,c;
    printf("Enter the values of a triangle:\n ");
    scanf("%d %d %d", &a, &b, &c);

    printf("value returned : %d\n",triangle(a,b,c));

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    divisible(n);


    char s1[100],s2[100];

    printf("Enter two string :");
    scanf("%s %s",s1,s2);
    printf("First string =%s, Second string=%s\n",s1,s2);


    strlen(s1,s2);
    strcmp(s1,s2);
    strcpy(s1);
    strcat(s1,s2);
    substrcpy(s1);
    Reverse(s1);
    isPalindrome(s1);



}

