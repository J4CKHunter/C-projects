#include <stdio.h>
#include <stdlib.h>




int main()
{
  int
  float

   printf("Dikkat!Bu program birim olarak santimetre kullanmaktadýr.\nBirim cevirme onumuzdeki update'lerde gelecektir.");
   prinntf("Hatta ileriki dönemlerde formul bile seçtirecem la merak etme ! :D");
   printf("\n\nNeyi hesaplayacaksiniz?:");
   printf("\n\n1=Cevre");
   printf("\n2=Alan");
   printf("\n3=Hacim");
   scanf("%d",&a);

   if (a==1)
   {

    printf("\nGeometrik seklinizi seciniz:");
    printf("\n\n1=Kare");
    printf("\n2=Dikdortgen");
    printf("\n3=Ucgen);
    printf("\n4=Cember");

    scanf("%d",&b);

        if (b==1)

            {

            printf("\nBir kenari kac cm?");
            scanf("%f",&c)
            karecevresi=4*
            printf("\nKarenin cevresi:%f cm'dir.",c);

            }

        else if (b==2)
           {

                printf("\nUzun kenari giriniz:");
                scanf("%f",&uzunkenar);
                printf("\nKisa kenari giriniz:");
                scanf("%f",&kisakenar);

                if (uzunkenar>kisakenar)
                {
                    dikdortgencevresi=(uzunkenar+kisakenar)*2;
                    printf("\nDikdortgenin cevresi:%f cm'dir.",dikdortgencevresi);
                }

                else if (kisakenar>uzunkenar)
                {
                    printf("\nKenarlari karistirdiniz!");
                }

                else
                {
                    printf("\nYanlis geometrik sekil sectiniz.Bu bir kare yahu !");
                }



           }

        else if (b==3)

           {

               printf("nLutfen ucgen tipini seciniz:");
               printf("\n\n1=Eskenar Ucgen");
               printf("\n2=Ikizkenar Ucgen");
               printf("\n3=Cesitkenar Ucgen");
               scanf("%d",&d);

               if (d==1)
               {
                   printf("\nLutfen bir kenarin uzunlugunu giriniz:");
                   scanf("%d",&eskenarucgenkenari);
                   eskenarucgencevresi=eskenarucgenkenari*3;
                   printf("\nUcgen cevresi:%f cm'dir.",eskenarucgencevresi);
               }

               else if (d==2)
               {
                   printf("\nLutfen esit olan kenar uzunluklarýný giriniz:");
                   scanf("%d",&ikizkenarucgen);
                   printf("\nDiger kenar uzunlugunu giriniz:");
                   scanf("%d",&digerkenaruzunlugu);
                   ikizkenarucgencevresi=(2*ikizkenarucgen)+digerkenaruzunlugu;
                   printf("\nUcgen cevresi:%d cm'dir.",ikizkenarucgencevresi);

               }

               else if (d==3)
               {
                   printf("\nLutfen sirayla kenar uzunluklarini giriniz:");
                   scanf("%d%d%d",&x,&y,&z);
                   cesitkenarucgencevresi=x+y+z;
                   printf("\nUcgen cevresi:%f cm'dir.",cesitkenarucgencevresi);
               }


           }

        else if (b==4)
        {
            float pi;
            pi=3.14;
            printf("\nLutfen cemberin yaricapini giriniz:");
            scanf("%f",&r);
            cembercevresi=2.pi.r
            printf("Cemberin cevresi:%f cm'dir.",cembercevresi);

        }

}

   else if (a==2)
   {
       printf("\nGeometrik seklinizi seciniz:");
       printf("\n\n1=Kare");
       printf("\n2=Dikdortgen");
       printf("\n3=Ucgen")
       printf("\n4=Daire");
       scanf("%d",&m);

        if (m==1)
        {
            printf("\nLutfen bir kenar uzunlugunu giriniz:");
            scanf("%f",&karrah);
            karealani=karrah*karrah
            printf("\nKare alani:%f cm²'dir",karealani);
        }


        else if (m==2)
        {
            printf("\nLutfen sirasiyla bir uzun kenari ve bir kisa kenar uzunlugunu giriniz:");
            scanf("%d%d",&u,&p);

            if (u==p)
            {
                printf("\nBu bir kare yanlis giris yaptiniz yahu!");
            }

            else if (u>p)
            {
                dikdortgenalani=u*p;
                printf("\nDikdortgenin alani:%f cm²'dir");
            }

            else if (p>u)
            {
                printf("\nKenarlari karistirdiniz!");
            }


        }

        else if (m==3)
         {
            //UCGEN ALANI UCGEN SARTINI FELAN DA SAGLAYACAK """"ELİNİZDEKİ VERİLER NELERDİR ?""""
         }

        else if (m==4)
        {
           float pi
           pi=3.14
           printf("\nDairenin yaricapini giriniz:");
           scanf("%d",&rr);
           dairealani=pi*rr*rr;
           printf("\nDaire alaný:%f cm²'dir",dairealani);
        }


     else if (a==3)
     {
       printf("\nLutfen geometrik seklinizi seciniz:");
       printf("\n\n1=Kup");
       printf("\nDikdortgenler Prizmasi")
       printf("\n3=Ucgen Prizma");
       printf("\n4=Kure");
       printf("\n5=Dik Silindir");
       printf("\n6=Koni")
       scanf("%d",&j);


            if (j==1)
            {
            printf("\nLutfen kubun bir kenarını giriniz:");
            scanf("%d",&kubunkenarı);
            kuphacmi=kubunkenarı*kubunkenarı*kubunkenarı
            printf("\nKupun hacmi:%f cm³'tür.");
            }

            else if (j==2)
            {
            printf("\nLutfen sirasiyla kenarları giriniz:");
            scanf("%f%f%f",&g,&v,&t);
            dikprizmahacim=g*v*t;
            printf("\nDikdortgenler prizmasini hacmı:%f cm³'tür",dikprizmahacim);
            }

            else if (j==3)
            {
                //UCGEN KALSINNNNNNNN
            }

            else if (j==4)
            {
                float pi;
                pi=3.14;
                printf("\nLutfen kurenin yaricapini giriniz:");
                scanf("%f",&rrr);
                kurehacmi=4/3(pi*rrr*rrr*rrr);
                printf("\nKurenin hacmi:%f" cm³'tür.",kurehacmi);

            }

            else if (j==5)
            {
                float pi;
                pi=3.14;
                printf("\Lutfen taban yaricapini giriniz:");
                scanf("%f",&silindirr);
                printf("\nLutfen silindirin yuksekligini giriniz:");
                scanf("%f",&hhhh);
                silindirtabanalani=pi*silindirr*silindirr
                silindirinhacmi=hhhh*silindirintabanalani
                printf("\nSilindirin hacmi:%f cm³'tür.",silindirinhacmi);

            }

            else if (j==6)
            {
                float pi;
                pi=3.14;
                printf("\nLutfen koninin taban yaricapini giriniz:");
                scanf("%f",&konirr);
                printf("\nLutfen koninin yuksekligini giriniz:");
                scanf("%f",&konih);
                konitabanalani=pi*konirr*konirr
                konihacmi=konitabanalani*konih/3;
                printf("\nKonin hacmi: %f cm³'tür.",konihacmi);

            }

     }




















   }
