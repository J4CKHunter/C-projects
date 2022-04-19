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
            mesaiucreti=5*mesaiyapma;
            maas=normalgunucreti+mesaiucreti;
            printf("\nCalisanin maasi:%f liradir.",maas);
        }

        else if(10<mesaisaati<20)
        {
            normalgunucreti=mesaisizgun*gunsaat*saatucreti;
            mesaiucreti=3*mesaiyapma;
            maas=normalgunucreti+mesaiucreti;
            printf("\nCalisanin maasi:%f liradir.",maas);
        }

        else
        {
            normalgunucreti=mesaisizgun*gunsaat*saatucreti;
            mesaiucreti=2*mesaiyapma;
            maas=normalgunucreti+mesaiucreti;
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
       printf("\nHatali giris.\nLutfen belirtilen aralýklarda deger giriniz ama ben su an loop yapmayý bilmiyorum :D");
   }


return 0;

}














