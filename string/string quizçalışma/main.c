#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ad[21];
    char soyad[21];
    char tc[13];
    char telno[12];
    char adres[201];
    char maas[7];

    printf("calisanin ismi:");
    fgets(ad,20,stdin);
    printf("\ncalisanin soyadi:");
    fgets(soyad,20,stdin);
    printf("\ncalisanin tcsi:");
    fgets(tc,13,stdin);
    printf("\ncalisanin telefon nosu:");
    fgets(telno,12,stdin);
    printf("\ncalisanin adresi:");
    fgets(adres,200,stdin);
    printf("\ncalisanin maasi:");
    fgets(maas,6,stdin);

    int *p=(int*)malloc(sizeof(int)*6);

    p[0]=&ad;
    p[1]=&soyad;
    p[2]=&tc;
    p[3]=&telno;
    p[4]=&adres;
    p[5]=&maas;

    for(int i=0;i<6;i++){
        printf("\n%d.%s",i+1,p[i]);
    }

}
