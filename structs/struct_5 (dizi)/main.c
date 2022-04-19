#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{

    char isim[20];
    char bolum[20];
    int numara;
    int giris_yili;
    char tc[12];

}ogrenci;
int main()
{
    srand(time(NULL));
    ogrenci liste[20];

    for(int i=0;i<20;i++){
        int j;
        for(j=0;j<5;j++){
            liste[i].isim[j]=65+rand()%25;
        }
        liste[i].isim[j]='\0';

        int w;
        for(w=0;w<10;w++){
            liste[i].bolum[w]=65+rand()%25;
        }
        liste[i].bolum[w]='\0';

        liste[i].numara=rand()%100000;

        liste[i].giris_yili=2000+rand()%20;

        int k;
        for(k=0;k<11;k++){
            liste[i].tc[k]=48+rand()%10;
        }
        liste[i].tc[k]='\0';

    }

    for(int q=0;q<20;q++){

        printf("%d.%s   %s   %d   %d   %s\n",q+1,liste[q].isim,liste[q].bolum,liste[q].numara,liste[q].giris_yili,liste[q].tc);

    }
}
