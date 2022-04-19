#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[]="erdem nayin.kerem nayin.sebile nayin.bilal nayin.";
    char token[]=".nayin";

    char *kelime=strtok(dizi,token);

    while(kelime!=NULL){
            printf("%s\n",kelime);

            kelime=strtok(NULL,token);
    }
}
