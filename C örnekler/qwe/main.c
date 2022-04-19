#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};
    int yer=-5;
    int sayi;
    printf("aradiginizi girin:");
    scanf("%d",&sayi);

    for(int i=0;i<10;i++){

        if(dizi[i]==sayi){
            yer=i;
        }

    }

    if(yer==-5)
        printf("\ndizide yok");
    else
        printf("\nsirasi:%d",yer);
}
