#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("dosya.txt","w");
    fprintf(filepointer,"erdemnayin");
    fclose(filepointer);

    filepointer=fopen("dosya.txt","r");
    char buffer[11];
    fread(buffer,10,1,filepointer);
    fclose(filepointer);
    printf("dosyadaki 10 karakter: %s",buffer);
}
