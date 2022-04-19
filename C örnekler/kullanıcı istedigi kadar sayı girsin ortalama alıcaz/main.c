#include <stdio.h>
#include <stdlib.h>

int main()
{

    int girilen=0;
    int n=-1;
    int toplam=0;

    while(girilen!=-1){
        scanf("%d",&girilen);
        toplam=toplam+girilen;
        n++;
    }

    toplam++;
    float ortalama;
    ortalama=(float)toplam/n;
    printf("Sayilarin ortalamasý:%f",ortalama);
    return 0;


}
