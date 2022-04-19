#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen;
    int enbuyuk=0;

    printf("Uc pozitif tam sayi giriniz.En buyugunu soyleyecegim.");

    for(int i=0;i<3;i++){
        scanf("%d",&girilen);
        if(girilen>enbuyuk)
        {
            enbuyuk=girilen;
        }
        printf("\nSu ana kadarki en buyuk sayi:%d",enbuyuk);
    }

        printf("\nGirilen 3 sayi arasindaki en buyuk sayi:%d",enbuyuk);
        return 0;
}
