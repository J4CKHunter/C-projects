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

    char kan_gruplari[11][5];

    kan_gruplari[0][0]='a';
    kan_gruplari[0][1]='b';
    kan_gruplari[0][2]='+';
    kan_gruplari[0][3]='\0';

    kan_gruplari[1][0]='a';
    kan_gruplari[1][1]='b';
    kan_gruplari[1][2]='-';
    kan_gruplari[1][3]='\0';

    kan_gruplari[2][0]='a';
    kan_gruplari[2][1]='+';
    kan_gruplari[2][2]='\0';

    kan_gruplari[3][0]='a';
    kan_gruplari[3][1]='-';
    kan_gruplari[3][2]='\0';

    kan_gruplari[4][0]='b';
    kan_gruplari[4][1]='+';
    kan_gruplari[4][2]='\0';

    kan_gruplari[5][0]='b';
    kan_gruplari[5][1]='-';
    kan_gruplari[5][2]='\0';

    kan_gruplari[6][0]='c';
    kan_gruplari[6][1]='+';
    kan_gruplari[6][2]='\0';

    kan_gruplari[7][0]='c';
    kan_gruplari[7][1]='-';
    kan_gruplari[7][2]='\0';

    kan_gruplari[8][0]='0';
    kan_gruplari[8][1]='+';
    kan_gruplari[8][2]='\0';

    kan_gruplari[9][0]='0';
    kan_gruplari[9][1]='-';
    kan_gruplari[9][2]='\0';



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

    kontrol=0;
    int sayac=0;
    int f,e;

    for(e=0;e<10;e++){

        for(f=0;f<a;f++){

            kontrol=strcmp(kan_gruplari[e],liste[f].kan_grubu);
            if(kontrol==0){
                sayac++;

            }
        }

        if(sayac==0){
            continue;
        }

        if(sayac!=0){
                printf("\n\n%s:",kan_gruplari[e]);
            }

        for(f=0;f<a;f++){

            kontrol=strcmp(kan_gruplari[e],liste[f].kan_grubu);
            if(kontrol==0){

                printf("\n%s",liste[f].ad);
                printf("\n%s",liste[f].kan_grubu);
                printf("\n%s",liste[f].telefon);
                printf("\n%d.%d.%d",liste[f].dogum_tarihi.gun,liste[f].dogum_tarihi.ay,liste[f].dogum_tarihi.yil);
                printf("\n\n");
            }
        }
        sayac=0;
    }

    return 0;

}
