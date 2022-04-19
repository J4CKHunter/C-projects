#include <stdio.h>
#include <stdlib.h>

int main()
{
   int satir;
   scanf("%d",&satir);

   for(int a=1;a<=satir;a++){

        for(int b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
   }

   return 0;

}
