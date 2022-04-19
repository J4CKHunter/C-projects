#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[]="erdem nayin c kodlamayi ogreniyor.erdem kodlamayi ogreniyor. ";
    char aranan[]="kodlamayi";

    int sayac=0;
    char *arama_p=strstr(string,aranan);

    while(arama_p!=NULL){

            printf("\naranan kelimenin bellekteki yeri --->%d<---",arama_p);
            sayac++;
            arama_p=strstr(arama_p+1,aranan);

    }
    printf("\nkelime cumlede--->%d<---tane var",sayac);





}
