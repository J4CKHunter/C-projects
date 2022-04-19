#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("yazi.txt","w");
    char string[100];
    fgets(string,100,stdin);
    fputs(string,filepointer);
    fclose(filepointer);

    filepointer=fopen("yazi.txt","a");
    fgets(string,100,stdin);
    fputs(string,filepointer);
    fclose(filepointer);
}
