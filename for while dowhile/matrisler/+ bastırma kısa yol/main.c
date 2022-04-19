#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   printf("Sayi giriniz:");
   scanf("%d",&sayi);

   for(int i=1;i<=sayi;i++){
        for(int j=1;j<=sayi;j++){

        if(i==(sayi/2)+1 || j==(sayi/2)+1 ||(sayi%2==0&&(i==sayi/2||j==sayi/2)))
            printf("1");

       else{
            printf("0");
        }
        }
    printf("\n");

   }

}

