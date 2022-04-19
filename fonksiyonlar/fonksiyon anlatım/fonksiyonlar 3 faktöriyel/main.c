#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int x;
    printf("Hangi sayinin faktoriyelini almamizi istiyorsaniz giriniz:");
    scanf("%d",&x);
    printf("Sonuc:%d",fact(x));
}

int fact(x){

    int sonuc=1;
    for(int i=1;i<=x;i++){

        sonuc=sonuc*i;

    }

    return sonuc;
}

