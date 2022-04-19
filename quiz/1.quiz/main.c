#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("1.Sayiyi giriniz:");
    scanf("%d",&a);
    printf("\n2.Sayiyi giriniz:");
    scanf("%d",&b);
    printf("\n3.Sayiyi giriniz:");
    scanf("%d",&c);


    float d;
    d=((float)a+b+c)/3;

    printf("\nGirilen sayilarin ortalamasi:%f",d);

    if (a>d && b>d && c<d)
    {
        printf("\nOrtalamadan buyuk sayilar %d ve %d'dir.",a,b);
    }

    else if (a>d && c>d && b<d)
    {
        printf("\nOrtalamadan buyuk sayilar %d ve %d'dir.",a,c);
    }

    else if (b>d && c>d && a<d)
    {
        printf("\nOrtalamadan buyuk sayilar %d ve %d'dir.",b,c);
    }

    else if (a>d && b<d && c<d)
    {
        printf("\nOrtalamadan buyuk sayi %d'dir.",a);
    }

    else if (a<d && b>d && c<d)
    {
        printf("\nOrtalamadan buyuk sayi %d'dir.",b);
    }

    else if (a<d && b<d && c>d)
    {
        printf("\nOrtalamadan buyuk sayi %d'dir.",c);
    }

    else if (a==b && b==c & a==c)
    {
        printf("\nSayilar esittir.");
    }


    return 0;
}

