#include <stdio.h>
#include <stdlib.h>

int main()
{
   char basharf;
   int mesaisizgun,gunsaat,mesaiyapma,mesaisaati;
   float saatucreti,maas,mesaiucreti,normalgunucreti;


    printf("Calisanin bas harfini giriniz:");
    scanf("%c",&basharf);
    printf("\nCalisan bir ay icerisinde kac gun mesaisiz calisti?:");
    scanf("%d",&mesaisizgun);
    printf("\nGunde kac saat calisti?:");
    scanf("%d",&gunsaat);
    printf("\nCalisanin saat basi ucreti nedir?:");
    scanf("%f",&saatucreti);
    printf("\nCalisan mesai yaptiysa 1 yapmadiysa 0 yaziniz:");
    scanf("%d",&mesaiyapma);

    if (mesaiyapma==1)
    {
        printf("\nKac saat mesai yapti?");
        scanf("%d",&mesaisaati);

        if(mesaisaati<=10)
        {
            normalgunucreti=mesaisizgun*gunsaat*saatucreti;
            mesaiucreti=5*mesaisaati;
            maas=normalgunucreti+mesaiucreti;
            printf("\nCalisanin maasi:%f liradir.",maas);
        }

        else if(10<mesaisaati<20)
        {

            normalgunucreti=mesaisizgun*gunsaat*saatucreti;
            mesaiucreti=(mesaisaati-10)*3;
            maas=normalgunucreti+mesaiucreti+50;
            printf("\nCalisanin maasi:%f liradir.",maas);
        }

        else
        {
            normalgunucreti=mesaisizgun*gunsaat*saatucreti;
            mesaiucreti=(mesaisaati-20)*2;
            maas=normalgunucreti+mesaiucreti+80;
            printf("\nCalisanin maasi:%f liradir.",maas);
        }
   }

   else if (mesaiyapma==0)
   {
       normalgunucreti=mesaisizgun*gunsaat*saatucreti;
       printf("\nCalisanin maasi:%f liradir",normalgunucreti);
   }

   else
   {
       printf("\nHatali giris.\nLutfen belirtilen araliklarda deger giriniz ama ben su an loop yapmayi bilmiyorum :D");
   }


return 0;

}














