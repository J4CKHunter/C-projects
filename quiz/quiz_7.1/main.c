#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char barkod[5];
    int adet;

}urun_girisi;

typedef struct{

    char urun_adi[30];
    char barkod[5];
    float fiyat;
    urun_girisi giriscikis;

}urun_tanimla;

int main()
{

    urun_tanimla liste[100];
    urun_girisi giris_cikis;

    int a,b=0,c,d,e,f;

    while(a!=5){

    printf("\n\n1.Yeni Urun Girisi Yap");
    printf("\n2.Depoya Urun Ekle");
    printf("\n3.Depodan Urun Cýkar");
    printf("\n4.Depodaki Urunleri Listele");
    printf("\n5.Cikis");
    scanf(" %d",&a);

    printf("\n\n");

        switch(a){

        case 1:

            printf("\nUrunun ismini girin:");
            scanf(" %s",&liste[b].urun_adi);
            printf("\nUrunun 4 haneli barkod numarasini girin:");
            scanf(" %s",&liste[b].barkod);
            printf("\nUrunun fiyatini giriniz:");
            scanf(" %f",&liste[b].fiyat);
            liste[b].giriscikis.adet=0;
            b++;
            break;

        case 2:

            printf("\nEklemek istediginiz urunun barkod numarasini girin:");
            scanf(" %s",&giris_cikis.barkod);
            for(c=0;c<b;c++){

                f=strcmp(liste[c].barkod,giris_cikis.barkod);
                if(f==0){

                    printf("\nKac adet urun girisi yapmak istiyorusunuz?");
                    scanf("%d",&d);
                    liste[c].giriscikis.adet+=d;
                }
            }
            break;

        case 3:

            printf("\nCikarmak istediginiz urunun barkod numarasini girin:");
            scanf(" %s",&giris_cikis.barkod);
            for(c=0;c<b;c++){

                f=strcmp(liste[c].barkod,giris_cikis.barkod);
                if(f==0){

                    printf("\nKac adet urun girisi yapmak istiyorusunuz?");
                    scanf("%d",&d);
                    liste[c].giriscikis.adet-=d;
                }
            }
            break;

        case 4:

            for(e=0;e<b;e++){
                printf("\nUrun Adi:%s",liste[e].urun_adi);
                printf("\nUrun Barkodu:%s",liste[e].barkod);
                printf("\nUrun fiyati:%.2f",liste[e].fiyat);
                printf("\nUrun adedi:%d",liste[e].giriscikis.adet);
                printf("\n\n");
            }
            break;



                  }
            }
}
