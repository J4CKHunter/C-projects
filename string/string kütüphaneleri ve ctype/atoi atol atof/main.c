#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[50];
    printf("sayi giriniz:");
    fgets(string,48,stdin);

    int a=atoi(string);      // stringin başındaki sayı icerigini integer’a cevirir
    long b=atol(string);     // stringin başındaki sayı icerigini long’a cevirir
    double c=atof(string);   // stringin başındaki sayı icerigini double’a cevirir

    printf("\n%d",a);
    printf("\n%ld",b);
    printf("\n%lf",c);
}
