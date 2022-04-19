#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen=0,enbuyuk=0;

    printf("istediginiz kadar pozitif sayi girin ve programdan cikmak icin -1 girin.");
    printf("\nBen size girdiginiz en buyuk sayiyi soyleyecegim.");

    while(girilen!=-1){
        scanf("%d",&girilen);
        if(girilen>enbuyuk)
        enbuyuk=girilen;

    }

    printf("\nEn buyuk sayi:%d",enbuyuk);
    return 0;
}
