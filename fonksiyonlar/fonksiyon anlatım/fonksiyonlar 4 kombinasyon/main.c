#include <stdio.h>
#include <stdlib.h>

int fact(int);
int comb(int,int);
int main()
{
    int x,y;
    printf("Lutfen C(x,y) formatina gore sirasiyla x ve y sayilarini giriniz:");
    scanf("%d%d",&x,&y);
    printf("\nx'in y'li kombinasyonu=C(%d,%d)=%d'dir.",x,y,comb(x,y));

}

int fact(int x){
    int sonuc=1;
    for(int i=1;i<=x;i++){
        sonuc=sonuc*i;
    }
    return sonuc;
}

int comb(int x,int y){

    return fact(x)/(fact(x-y)*fact(y));

}
