#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//'0'=48     '9'=57    ' '=32 '\n' 10
int main()
{
    char cumle[1002]="kodunuzda1903 ne yeri1905ne n1ede5ne4 odak1907lanmal sizi daha iyi 6bir yaz41limci yapar10";
    //printf("cumle girin:");
    //fgets(cumle,1000,stdin);
    int dizi[1000];
    int k=0;
    int i;
    int sayac=0;

    for(i=0;i<strlen(cumle);i++){

        if(47<cumle[i] && cumle[i]<58){
                dizi[k]=cumle[i];
                k++;
                sayac++;

                if(cumle[i+1]>57 || cumle[i]<48){
                dizi[k]=10;
                k++;
                sayac++;
            }
        }

        if(cumle[i]==32){
                dizi[k]=10;
                k++;
                sayac++;
        }

    }

    for(int w=0;w<sayac;w++){
        if(dizi[w]==10){
            printf(" ");
        }
        printf("%c",dizi[w]);

    }

    return 0;
}
