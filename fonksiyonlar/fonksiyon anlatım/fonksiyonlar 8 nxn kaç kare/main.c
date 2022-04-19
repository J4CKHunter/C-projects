#include <stdio.h>
#include <stdlib.h>

int kare_sayisi(int);
int main()
{
    int x;
    printf("Lutfen karenin kaca kac oldugunu beliriniz:");
    scanf("%d",&x);
    printf("Girilen sekil %dx%d'dir",x,x);
    printf("\nDiyagramda bulunan kare sayisi:%d",kare_sayisi(x));
}

int kare_sayisi(int n){

    if(n==1){
        return 1;
    }

    return n*n+kare_sayisi(n-1);

}
