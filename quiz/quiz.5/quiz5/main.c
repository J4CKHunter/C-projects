#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[]="Cok calismak lazim azizim";

    // BURADA KEL�ME SAY�S�N� BULDUK
    // �K� BOYUTLU OALCAK OLAN STR�NG D�Z�S�N�N 1.BOYUTU(SATIR)
    int sayac=1;
    for(int i=0;i<strlen(string);i++){
        if(string[i]==' '){
            sayac++;
        }
    }

    // BURADA STR�NG� BASTAN SONA D�NS�N VE EN UZUN KEL�MEY� BULSUN
    // ONA G�RE �K� BOYUTLU STR�NG D�Z�S�N�N SUTUNU OLMUS OLCAK
    int a=0,b=0;
    for(int q=0;q<=strlen(string);q++){

        if(isalpha(string[q])){
            a++;
        }

        if(string[q]==' ' || string[q]=='\0'){
            if(a>b){
                b=a;
            }
            a=0;
        }
    }

    // BURADA �K� BOYUTLU STR�NG D�Z�M�Z� TANIMLIYORUZ
    char **dizi=(char**)malloc(sizeof(char)*sayac);;

    for(int w=0;w<sayac;w++){
        dizi[w]=malloc(sizeof(char)*(b+1));
    }

    // KEL�MELER� AYIRIP YEN� D�Z�YE ATIYORUZ
    int m=0,n=0;
    for(int e=0;e<strlen(string);e++){

        if(string[e]==' '){
            dizi[m][n]='\0';
            m++;
            n=0;
            continue;
        }

        dizi[m][n]=string[e];
        n++;

    }


    //BURDA DA SIRALAMA YAPIYORUZ
    char cmp[50];
    int y,u;

    for (y=0;y<sayac;y++)
    {
        for (u=y+1;u<=sayac;u++)
        {
            if ((strcmp(dizi[y],dizi[u])>0))
            {
                strcpy(cmp,dizi[y]);
                strcpy(dizi[y],dizi[u]);
                strcpy(dizi[u],cmp);
            }
        }
    }


    //2.Yi BASTIRIYORUZ

    printf("%s",dizi[1]);
}
