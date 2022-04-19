#include <stdio.h>
#include <stdlib.h>

void ucebolunen(int x[],int y[],int z[],int *a,int *b){

    int m=0,n=0;
    for(int i=0;i<34;i++){
        if(x[i]%3==0){
            y[m]=x[i];
            m++;
        }
        else{
            z[n]=x[i];
            n++;
        }
    }

    *a=m;
    *b=n;

}
int main()
{
    int dizi[34];
    int bolunenler[34];
    int bolunmeyenler[34];
    int bolunensayisi=0,bolunmeyensayisi=0;
    int kontrol=0;

    int *p1;
    p1=&bolunensayisi;

    int *p2;
    p2=&bolunmeyensayisi;


    for(int h=0;h<34;h++){
        dizi[h]=h+3;
    }

    ucebolunen(dizi,bolunenler,bolunmeyenler,p1,p2);

     if(bolunensayisi>bolunmeyensayisi){
        for(int i=bolunmeyensayisi;i<bolunensayisi;i++){
            bolunmeyenler[i]=0;
            kontrol=1;
        }
    }

    if(bolunmeyensayisi>bolunensayisi){
        for(int k=bolunensayisi;k<bolunmeyensayisi;k++){
            bolunenler[k]=0;
            kontrol=0;
        }
    }

    if(bolunensayisi==bolunmeyensayisi){
        kontrol=1;
    }

    printf("TOPLAM DIZISI:\n");

    if(kontrol==1){
        int toplam[bolunensayisi];
        for(int j=0;j<bolunensayisi;j++){
            toplam[j]=bolunenler[j]+bolunmeyenler[j];
            printf("%d.terimlerin toplami %d'dir.\n",j+1,toplam[j]);
        }
    }

    if(kontrol==0){
        int toplam[bolunmeyensayisi];
        for(int w=0;w<bolunmeyensayisi;w++){
            toplam[w]=bolunenler[w]+bolunmeyenler[w];
            printf("%d.terimlerin toplami %d'dir.\n",w+1,toplam[w]);
        }
    }
    return 0;
}
