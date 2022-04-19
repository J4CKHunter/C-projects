#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float ortalama_bul(float* dizi,int boyut){

    float toplam=0;
    for(int i=0 ; i<boyut ; i++){
        toplam=toplam+dizi[i];
    }

    return toplam/boyut;
}

float standart_sapma_bul(float* dizi,int boyut){

    float toplam=0;
    float ortalama=ortalama_bul(dizi,boyut);

    for(int i=0;i<boyut;i++){
        toplam=toplam + pow((dizi[i]-ortalama),2);
    }

    return sqrt(toplam/boyut);

}

void fonksiyon_1(float* dizi,int boyut,int buyuk_sayi,int kucuk_sayi){


    printf("\nOlusturulan rastgele dizi: ");
    srand( (unsigned)time( NULL ) );
    float random,diff,r;

    for(int i=0 ; i< boyut;i++){

        random = ((float) rand()) / (float) RAND_MAX;
        diff = buyuk_sayi - kucuk_sayi;
        r = random * diff;
        dizi[i]=kucuk_sayi + r;

        printf("\n%f ",dizi[i]);
    }

    printf("\n\nGirdiginiz Sayilarin Ortalamasi: %f ve Sayilarin Standart Sapmasi: %f",ortalama_bul(dizi,boyut),standart_sapma_bul(dizi,boyut));

}


int main(){

    int secim,boyut,sayi1,sayi2,buyuk_sayi,kucuk_sayi;

    printf("Dizi nasil olusturulacak ?\n1-Rastgele Sayilarla\n2-Elle Girilecek\n");
    scanf("%d",&secim);

    switch(secim){

        case 1:
            printf("\nKac Adet Sayi Olusturulsun?\n");
            scanf("%d ",&boyut);

            printf("\nOlusturulacak Sayilarin Maksimum ve Minimum Degerleri (Max - Min)\n");

            scanf("%d ",&sayi1);
            scanf("%d ",&sayi2);

            if(sayi1 > sayi2){
                buyuk_sayi=sayi1;
                kucuk_sayi=sayi2;
            }
            else if(sayi2 > sayi1 || sayi1 == sayi2){
                buyuk_sayi=sayi2;
                kucuk_sayi=sayi1;
            }

            printf("\nBuyuk sayi = %d Kucuk sayi = %d",buyuk_sayi,kucuk_sayi);


            float* dizi=(float*)malloc(sizeof(float)*boyut);

            fonksiyon_1(dizi,boyut,buyuk_sayi,kucuk_sayi);


            break;


        case 2:

            printf("\nKac Adet Sayi Gireceksiniz?\n");

            scanf("%d",&boyut);
            float* dizi2=(float*)malloc(sizeof(float)*boyut);

            printf("\nLutfen sayilari girin:");

            char str[100];
            fgets(str,100,stdin);
            str[strlen(str)]='\0';


            int i = 0;
            char *p = strtok (str, " ");

            while (p != NULL)
            {
                dizi2[i++] = atof(p);
                p = strtok (NULL, " ");
            }

            for (i = 0; i < boyut; ++i)
                printf("%f\n", dizi2[i]);

            printf("\n\nGirdiginiz Sayilarin Ortalamasi: %f ve Sayilarin Standart Sapmasi: %f",ortalama_bul(dizi2,boyut),standart_sapma_bul(dizi2,boyut));

            break;

        default:
            printf("\nYanlis deger girildi");
            break;
    }

    return 0;
}


