#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    dizi[3]=3;
    dizi[5]=5;

    int *p;
    p=&dizi[3];

    printf("%d",*(p+2));
    printf("\n%d",dizi[5]);
}
