#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char string[]="Cok calismak lazim azizim";

    // BURADA KELÝME SAYÝSÝNÝ BULDUK
    // ÝKÝ BOYUTLU OALCAK OLAN STRÝNG DÝZÝSÝNÝN 1.BOYUTU(SATIR)
    int sayac=1;
    for(int i=0;i<strlen(string);i++){
        if(string[i]==' '){
            sayac++;
        }
    }

    // BURADA STRÝNGÝ BASTAN SONA DÖNSÜN VE EN UZUN KELÝMEYÝ BULSUN
    // ONA GÖRE ÝKÝ BOYUTLU STRÝNG DÝZÝSÝNÝN SUTUNU OLMUS OLCAK
    int a=0,b=0;
    for(int q=0;q<=strlen(string);q++){

        if(isalpha(string[q])){
            a++;
            printf("%d\n",a);
        }

        if(string[q]==' ' || string[q]=='\0'){
            if(a>b){
                b=a;
                printf("b=%d\n",b);
            }
            a=0;
        }
    }

    printf("en son b=%d\n",b);
}
