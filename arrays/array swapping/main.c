#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satirsayisi,girdi;
    printf("kaclik dizi gireceksiniz?");
    scanf("%d",&satirsayisi);
    int a[satirsayisi];
    printf("\nLutfen elemanlari giriniz:");

    for(int i=0;i<satirsayisi;i++){
        scanf("%d",&girdi);
        a[i]=girdi;
    }
    printf("\ngirdiginiz dizi= ");
    for(int j=0;j<satirsayisi;j++){
        printf("%d ",a[j]);
    }

    for(int k=0;k<(satirsayisi/2);k++){
        int temporary=a[k];
        a[k]=a[satirsayisi-k-1];
        a[satirsayisi-k-1]=temporary;
    }

    printf("\ndizinin tersi= ");
    for(int j=0;j<satirsayisi;j++){
        printf("%d ",a[j]);
    }

}
