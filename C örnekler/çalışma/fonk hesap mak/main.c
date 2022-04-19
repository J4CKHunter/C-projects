#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int secim;
    int karar;

    do{
    printf("\nLutfen yapmak istediginiz fonksiyon islemini seciniz:\n");
    printf("1.Kok Alma\n2.Kuvvet Alma\n3.Tabana Yuvarla\n4.Uste Yuvarla\n5.Yuvarla\n6.Mutlak Deger Bulma");
    printf("\n7.Faktoriyel");
    scanf("%d",&secim);

    if(secim==1 || secim==2 || secim==3 || secim==4 || secim==5 || secim==6 || secim==7){
        karar=1;
    }
    else
        karar=0;

    printf("\n%d",karar);

    switch(secim){

        case 1 : printf("\nSayi girin:");
                 double giris;
                 scanf("%lf",&giris);
                 giris=sqrt(giris) ;
                 printf("\nSonuc:%f",giris); break;

        case 2 : printf("\nTabani girin:");
                 double taban;
                 scanf("%lf",&taban);
                 printf("\nUssu girin:");
                 double us;
                 scanf("%lf",&us);
                 double sonuc;
                 sonuc=pow(taban,us);
                 printf("\nSonuc:%f",sonuc); break;

        case 3 : printf("\nSayi girin:");
                 double sayi;
                 scanf("%lf",&sayi);
                 sayi=floor(sayi);
                 printf("\nSonuc:%f",sayi);break;

        case 4 : printf("\nSayi girin:");
                 double sayii ;
                 scanf("%lf",&sayii);
                 sayii=ceil(sayii);
                 printf("\nSonuc:%f",sayii);break;

        case 5 : printf("\nSayi girin:");
                 double sayiii;
                 scanf("%lf",&sayiii);
                 sayiii=round(sayiii);
                 printf("\nSonuc:%f",sayiii);break;

        case 6 : printf("\nSayi girin:");
                 double sayiiii;
                 scanf("%lf",&sayiiii);
                 sayiiii=fabs(sayiiii);
                 printf("\nSonuc:%f",sayiiii);break;

        case 7 : printf("\nSayi girin:");
                 int sayy;
                 scanf("%d",&sayy);
                 sayy=fak(sayy);
                 printf("\nSonuc:%d",sayy);
    }

    }while(karar!=1);
    }






int fak(int x){

    if(x==0){
        return 1;
    }

    return x*fak(x-1);

}
