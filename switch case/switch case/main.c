#include <stdio.h>
#include <stdlib.h>

int main()
{


   char giris,a,b,c,d;

   printf("Lutfen a b c veya d girisi yapýnýz");
   scanf("%c",&giris);

   switch(giris)
   {
       case 'a' : printf("\nsdsas");break;
       case 'b' : printf("\nwewqeqeqw");
       case 'c' : printf("\nasdsadasopdkas");break;
       case 'd' : printf("\nasdaasasddssa");break;
       default : printf("\nHatali giris");
   }


   return 0;
}
