#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x;
    int y;
}koordinat;

void yeni_deger_ata(koordinat *n1,koordinat *n2){

    (*n1).x=2;
    (*n1).y=3;
    (*n2).x=6;
    (*n2).y=7;
}

int main()
{
    koordinat nokta1={1,5};
    koordinat nokta2={3,4};

    printf("fonksiyona yollamadan once \n\nnokta1=%d,%d",nokta1.x,nokta1.y);
    printf("\nnokta2=%d,%d",nokta2.x,nokta2.y);
    printf("\n\n");
    printf("fonksiyona yolladiktan sonra\n\n");
    yeni_deger_ata(&nokta1,&nokta2);
    printf("nokta1=%d,%d",nokta1.x,nokta1.y);
    printf("\nnokta2=%d,%d",nokta2.x,nokta2.y);
}
