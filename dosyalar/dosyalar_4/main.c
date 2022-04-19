#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[]={'e','r','d','e','m','1','2','3'};

    FILE *filepointer;
    filepointer=fopen("text.txt","w");
    fwrite(string,8,1,filepointer);
    fclose(filepointer);

}
