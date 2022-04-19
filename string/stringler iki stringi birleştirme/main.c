#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

     char cumle1[101];
     char cumle2[101];
     char birlestir[201];
     printf("lutfen max 100 karakterlik bir cumle giriniz:");
     fgets(cumle1,101,stdin);

     printf("lutfen max 100 karakterlik bir cumle daha giriniz:");
     fgets(cumle2,101,stdin);

     int boyut1,boyut2;
     boyut1=strlen(cumle1)-1;
     boyut2=strlen(cumle2)-1;
     birlestir[boyut1]=' ';

     int a;
     for(int i=0;i<boyut1;i++){
            a=cumle1[i];
            birlestir[i]=a;
     }


     int b;
     for(int j=0;j<boyut2;j++){
            b=cumle2[j];
            birlestir[j+boyut1+1]=b;
     }

     printf("cumlelerin birlestirilmis hali :%s",birlestir);
}
