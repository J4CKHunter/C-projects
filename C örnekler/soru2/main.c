#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,sonuc;

    printf("Lutfen uc sayi giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    sonuc=a*a+b*b+3*c;
    printf("\nSonuc=%d",sonuc);

    return 0;
}
