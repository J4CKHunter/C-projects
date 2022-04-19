#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int gun;
    int ay;
    int yil;

}tarih;

typedef struct{

    char ad[30];
    char telefon[20];
    char kan_grubu[5];
    tarih dogum_tarihi;

}kayit_bilgisi;

int yas_hesabi(tarih dogumtarihi){

    tarih yas;
    tarih bugun={19,5,2019};

    yas.gun=bugun.gun-dogumtarihi.gun;
    if(yas.gun<0){
        yas.gun=yas.gun+30;
        bugun.ay--;
    }

    yas.ay=bugun.ay-dogumtarihi.ay;
    if(yas.ay<0){
        yas.ay=yas.ay+12;
        bugun.yil--;
    }

    yas.yil=bugun.yil-dogumtarihi.yil;

    if(yas.yil<18){
        return 0;
    }

    else{
        return 1;
    }

}
int main()
{

    kayit_bilgisi liste[100];
    int istenen_kayit;

    printf("Kac kayit yapmak istiyorsunuz?");
    scanf(" %d",&istenen_kayit);

    while(istenen_kayit>100){
        printf("Max. kayit kapasitemiz 100 ile sinirlandirilmistir.\nLutfen buna gore giris yapiniz.");
        scanf(" %d",&istenen_kayit);
    }

    int a=0;
    int b=0;
    kayit_bilgisi gecici;
    int kontrol;

    for(int i=0;i<istenen_kayit+b;i++){


        printf("\n\n%d.Kisinin dogum tarihini giriniz:",a+1);
        printf("\nGun:");
        scanf(" %d",&gecici.dogum_tarihi.gun);
        printf("\nAy:");
        scanf(" %d",&gecici.dogum_tarihi.ay);
        printf("\nYil:");
        scanf(" %d",&gecici.dogum_tarihi.yil);

        kontrol=yas_hesabi(gecici.dogum_tarihi);

        if(kontrol==1){


            liste[a].dogum_tarihi.gun=gecici.dogum_tarihi.gun;
            liste[a].dogum_tarihi.ay=gecici.dogum_tarihi.ay;
            liste[a].dogum_tarihi.yil=gecici.dogum_tarihi.yil;
            printf("\nKisinin adini girin:");
            scanf(" %s",&liste[a].ad);
            printf("\nKisinin telefon numarasini girin:");
            scanf(" %s",&liste[a].telefon);
            printf("\nKisinin kan grubunu giriniz:");
            scanf(" %s",&liste[a].kan_grubu);
            a++;

        }
        else{
            printf("\nKisinin yasi 18'den kucuk oldugundan kayit alinamamaktadir.");
            b++;
            continue;
        }


    }

    for(int q=1;q<a;q++){
        for(int w=0;w<a-1;w++){

            kontrol=strcmp(liste[w].kan_grubu,liste[w+1].kan_grubu);
            if(kontrol==-1){

                    strcpy(gecici.ad,liste[w].ad);
                    strcpy(gecici.kan_grubu,liste[w].kan_grubu);
                    strcpy(gecici.telefon,liste[w].telefon);
                    gecici.dogum_tarihi.gun=liste[w].dogum_tarihi.gun;
                    gecici.dogum_tarihi.ay=liste[w].dogum_tarihi.ay;
                    gecici.dogum_tarihi.yil=liste[w].dogum_tarihi.yil;


                    strcpy(liste[w].ad,liste[w+1].ad);
                    strcpy(liste[w].kan_grubu,liste[w+1].kan_grubu);
                    strcpy(liste[w].telefon,liste[w+1].telefon);
                    liste[w].dogum_tarihi.gun=liste[w+1].dogum_tarihi.gun;
                    liste[w].dogum_tarihi.ay=liste[w+1].dogum_tarihi.ay;
                    liste[w].dogum_tarihi.yil=liste[w+1].dogum_tarihi.yil;


                    strcpy(liste[w+1].ad,gecici.ad);
                    strcpy(liste[w+1].kan_grubu,gecici.kan_grubu);
                    strcpy(liste[w+1].telefon,gecici.telefon);
                    liste[w+1].dogum_tarihi.gun=gecici.dogum_tarihi.gun;
                    liste[w+1].dogum_tarihi.ay=gecici.dogum_tarihi.ay;
                    liste[w+1].dogum_tarihi.yil=gecici.dogum_tarihi.yil;

            }

        }
    }

    printf("\n\n\n");

    for(int e=0;e<a;e++){
        printf("\n\n");
        printf("\n%s",liste[e].ad);
        printf("\n%s",liste[e].kan_grubu);
        printf("\n%s",liste[e].telefon);
        printf("\n%d.%d.%d",liste[e].dogum_tarihi.gun,liste[e].dogum_tarihi.ay,liste[e].dogum_tarihi.yil);

    }

    return 0;

}
