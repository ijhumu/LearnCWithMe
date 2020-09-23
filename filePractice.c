#include<stdio.h>

int main()
{
    //File pointer
    //File open : mode
    // operation :
    //File close

    FILE *fp; // pointer

    fp = fopen("myFile.txt", "w+"); //open with mode

    //
    fprintf(fp, "My First Line");
    fclose(fp); //close

    fp = fopen("myFile.txt", "r+");
    char str[100];
    //fscanf(fp,"%s",str);
    fgets(str, 5, fp);
    printf("%s\n", str);

    fgets(str, 4, fp);
    printf("%s\n", str);

    rewind(fp);

    fgets(str, 6, fp);
    printf("%s\n", str);

    fseek(fp, 2, SEEK_SET);


    fprintf(fp, "PQRSTUVWX");


    //fseek(fp, 2, SEEK_SET);
    char str2[50];
    fgets(str2, 50, fp);

    printf("%s\n", str2);

    /*
    fgets(str,5,fp);
    printf("%s\n",str);

    rewind(fp);

    fgets(str,10,fp);
    printf("%s\n",str);

    fseek(fp, 2, SEEK_SET);
    fgets(str,10,fp);
    printf("%s\n",str);
    */
    fclose(fp);
    //fprintf(fp, "My First Line");
}
