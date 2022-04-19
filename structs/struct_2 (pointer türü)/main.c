#include <stdio.h>
#include <stdlib.h>

typedef enum{
    bay,
    bayan
}cinsiyet;


typedef struct{

    char *isim;
    int yas;
    float maas;
    cinsiyet c;

}insan;

int main()
{

    insan *kisi;
    kisi=(insan*)malloc(sizeof(insan));


    kisi->c=bay;
    kisi->yas=20;
    kisi->maas=500;

    printf("Adi:%s",kisi->isim="Erdem Nayin");
    printf("\nCinsiyeti:%u",kisi->c);
    printf("\nYasi:%d",kisi->yas);
    printf("\nMaasi:%.2f",kisi->maas);







}
