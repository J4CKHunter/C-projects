#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("yazi.txt","w");
    fprintf(filepointer,"erdem nayin 180202050");
    fseek(filepointer,6,SEEK_SET);
    fputs("j4ckhunter",filepointer);
    fclose(filepointer);
}
