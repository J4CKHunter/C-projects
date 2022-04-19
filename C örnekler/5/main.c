#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam=0;
    int dizi[10]={2,1,0,0,2,1,1,2,1,0};

    for(int i=0;i<10;i++){
        if(dizi[i]==2){
            toplam=toplam+3;
        }
        if(dizi[i]==0){
            toplam=toplam+1;
        }
    }
    printf("Toplanan puan:%d ",toplam);

    if(toplam>=12){
        printf("Kumede kaldi");
    }
    else{
        printf("Kume dustu.");
    }

}
