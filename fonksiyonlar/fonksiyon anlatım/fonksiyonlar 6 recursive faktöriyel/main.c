#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main()
{
    int x;
    printf("Sayi girin faktoriyelini alicam:");
    scanf("%d",&x);
    printf("\nSonuc:%d",fact(x));
}

int fact(int x){

        if(x==0 || x==1){
            return 1;
        }

        return x*fact(x-1);
}
