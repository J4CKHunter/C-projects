#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,i,sayi;
    int sayac=0;

    for(i=100;i<=999;i++){

        sayi=i;
        c=sayi%10;
        sayi=sayi/10;
        b=sayi%10;
        sayi=sayi/10;
        a=sayi;

        if(a!=b && b!=c && a!=c){
            sayac++;
        }
    }

    printf("%d",sayac);


}
