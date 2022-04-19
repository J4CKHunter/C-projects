#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   int toplama,cikarma,carpma,bolme;

   toplama=1;
   cikarma=2;
   carpma=3;
   bolme=4;


   printf("Yapacaginiz islemi seciniz:");
   printf("\n1=toplama");
   printf("\n2=cikarma");
   printf("\n3=carpma");
   printf("\n4=bolme");

   scanf("%d",&a);



       if(a==1)
   {
      printf("\nBir sayý giriniz");
      scanf("%d",&b);
      printf("\nBir sayý daha giriniz");
      scanf("%d",&c);
      d=b+c;
      printf("%d+%d=%d",b,c,d);

   }

   else if(a==2)
   {
      printf("\nBir sayý giriniz");
      scanf("%d",&b);
      printf("\nBir sayý daha giriniz");
      scanf("%d",&c);
      d=b-c;
      printf("%d-%d=%d",b,c,d);
   }

    else if(a==3)
   {
      printf("\nBir sayý giriniz");
      scanf("%d",&b);
      printf("\nBir sayý daha giriniz");
      scanf("%d",&c);
      d=b*c;
      printf("%d*%d=%d",b,c,d);
   }

   else if (a==4)
   {
      printf("\nBir sayý giriniz");
      scanf("%d",&b);
      printf("\nBir sayý daha giriniz");
      scanf("%d",&c);
      d=(float)b/c;
      printf("%d/%d=%d",b,c,d);
   }



   else
    printf("\nYanlis giris.");

   return 0;


}
