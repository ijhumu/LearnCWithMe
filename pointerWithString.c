#include<stdio.h>
int main()
{
    char str[] = "CAT AND DOG";//{'C', 'A', 'T'};

    for(int i=0; str[i] != '\0' ; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    printf("\n");

    printf("%s\n",str);


    //pointer
    int len = strlen(str);
    printf("length is %d\n", len);

    char *pStr = &str;
    for(int i=0;i<len;i++)
    {
        printf("address at index %d is %d, value %c\n", i, pStr, *pStr);
        pStr++;
    }

    pStr = &str;
    int j=0;
    while(j<len)
    {
        printf("address at index %d is %d, value %c\n", i, pStr, *pStr);
        j++;
        pStr++;
    }

    pStr = &str;
    while(*pStr != '\0')
    {
        printf("address is %d, value %c\n", pStr, *pStr);
        pStr++;
    }

    pStr = &str;
    int k=0;
    while(k<len)
    {
        printf("address at index %d is %d, value %c\n", k, (pStr+k), *(pStr+k));
        k++;
    }

    //Using pointer to store string
    char *pNewStr = "Jhupu pore";
    while(*pNewStr != '\0')
    {
        printf("address is %d, value %c\n", pNewStr, *pNewStr);
        pNewStr++;
    }

    char* pAgainStr = "Pritam porai";
    printf("%s\n", pAgainStr);

    // Array of String:
    char myStr[4][10] = {"PRI", "CHOPU", "SHOVON", "JHUPU"};
    for(int i=0;i<4;i++)
    {
        for(int j=0;myStr[i][j] != '\0'; j++)
        {
            printf("%c", myStr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<4;i++)
    {
        printf("%s\n",myStr[i]);
    }

    char *pMyStr[3] = {"MAISHA", "RUMU", "MUMU"};
    for(int i=0;i<3;i++)
    {
        printf("%s\n",pMyStr[i]);
    }

}
