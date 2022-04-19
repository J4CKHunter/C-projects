#include <stdio.h>
#include <stdlib.h>
typedef enum{

    ocak,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik,

}dogum_ayi;

typedef struct{



    dogum_ayi dogumayi;

    enum {bay,bayan}cinsiyet;
    enum{pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar}maasgunu;


    char *isim;
    int dogumyili;
    int dogumgunu;
    int yas;
    char *meslek;
    float boy;
    float maas;


}insan;

int main()
{

    insan kisi;

    kisi.dogumayi=aralik;
    kisi.cinsiyet=bay;
    kisi.maasgunu=carsamba;


    kisi.isim="erdem nayin";
    kisi.dogumyili=1998;
    kisi.dogumgunu=18;
    kisi.yas=20;
    kisi.meslek="bilgisayar muhendisligi ogrencisi";
    kisi.boy=1.70;
    kisi.maas=500;


    printf("Bu %s'dir.%d %u %d tarihinde dogmustur.",kisi.isim,kisi.dogumgunu,kisi.dogumayi+1,kisi.dogumyili);
    printf("\nYasi %d'dir.Cinsiyeti %u'dur.",kisi.yas,kisi.cinsiyet);
    printf("\nBoyu %.2f m'dir.%s dir.Aylik kazanci %.2f tl'dir.Maasini %u gunu alir.",kisi.boy,kisi.meslek,kisi.maas,kisi.maasgunu);


}
