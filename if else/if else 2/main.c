#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("iki sayi giriniz:");
    scanf("%f%f",&a,&b);

    if(a>b)
    {
        printf("\nBuyuk sayi:%f",a);
    }

    else if (a<b)
    {
        printf("\nBuyuk sayi:%f",b);
    }

    else
    {
        printf("\nSayilar esittir.");
    }



    return 0;
}
