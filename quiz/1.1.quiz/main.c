#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h;

    printf("1.Sayiyi giriniz:");
    scanf("%d",&a);
    printf("\n2.Sayiyi giriniz:");
    scanf("%d",&b);

    c=a%2;
    d=b%2;

    e=a+b;
    f=a-b;
    g=b-a;
    h=a+b;


    if (c==1 && d==1)
    {
        printf("\n%d+%d=%d",a,b,e);
    }

    else if (c==1 && d==0)
    {
        printf("\n%d-%d=%d",a,b,f);
    }

    else if (c==0 && d==1)
    {
        printf("\n%d-%d=%d",b,a,g);
    }

    else if (c==0 && d==0)
    {
        printf("\n%d+%d=%d",a,b,h);
    }
    return 0;
}
