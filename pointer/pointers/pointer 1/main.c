#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int *p;
    p=&a;

    printf("\n%d",a);       // a NIN DEGERINI BASAR
    printf("\n%d",&a);      // a NIN ADRESINI BASAR
    printf("\n%d",p);       // p NIN DEGERINI BASAR.YANI a'NIN ADRESINI.
    printf("\n%d",*p);      // a NIN DEGERINI BASAR.YANI a'NIN ADRESINDEKI DEGERINI.
    printf("\n%d",&p);      // p NIN ADRESINI BASAR.

}
