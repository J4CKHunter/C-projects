#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{

    int gun;
    int ay;
    int yil;

}tarih;

typedef struct{

    char ad[20];
    char soyad[30];
    char no[11];
    char bolum[50];
    tarih kayit_tarihi;
}ogrenci;

tarih tarih_dogrulama(int gunu,int ayi,int yili){

    tarih t;
    if(gunu>31 || ayi>12){
        t.gun=0;
        t.ay=0;
        t.yil=0;
    }
    else{
        t.gun=gunu;
        t.ay=ayi;
        t.yil=yili;
    }
    return t;
}

void ogrenci_ata(ogrenci *ogr,char adi[],char soyadi[],char num[],char bolumm[],tarih kayit){

        strcpy(ogr->ad,adi);
        strcpy(ogr->soyad,soyadi);
        strcpy(ogr->no,num);
        strcpy(ogr->bolum,bolumm);

        ogr->kayit_tarihi=kayit;
}

int main()
{
    ogrenci liste[50];
    ogrenci_ata(&liste[0],"Erdem","Nayin","180202050","Bilgisayar Muhendisligi",tarih_dogrulama(31,8,2018));
    ogrenci_ata(&liste[1],"Kerem","Nayin","180202095","Mekatronik Muhendisligi",tarih_dogrulama(23,7,2018));
    int ogrenci_sayisi=2;
    for(int i=0;i<ogrenci_sayisi;i++){
        printf("Ogrencinin Adi:%s",liste[i].ad);
        printf("\nOgrencinin Soyadi:%s",liste[i].soyad);
        printf("\nOgrencinin Numarasi:%s",liste[i].no);
        printf("\nOgrencinin Bolumu:%s",liste[i].bolum);
        printf("\nOgrencinin Kayit Tarihi:%d.%d.%d",liste[i].kayit_tarihi.gun,liste[i].kayit_tarihi.ay,liste[i].kayit_tarihi.yil);
        printf("\n\n\n");
    }
}
