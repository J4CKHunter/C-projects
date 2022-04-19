#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,toplama,cikarma,carpma,mod;
    float bolme;

    a=9;
    b=6;
    toplama=a+b;
    cikarma=a-b;
    carpma=a*b;
    bolme=(float)a/b;
    mod=a%b;

    printf("%d+%d=%d",a,b,toplama);
    printf("\n%d-%d=%d",a,b,cikarma);
    printf("\n%d*%d=%d",a,b,carpma);
    printf("\n%d/%d=%f",a,b,bolme);
    printf("\n%d (mod%d)=%d",a,b,mod);
    printf("\nTebrikler ilk hafta billabini simule ettiniz.");

    return 0;

}
