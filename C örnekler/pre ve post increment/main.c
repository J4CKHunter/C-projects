#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=20;

       /* post increment(a++) = sonradan arttir
       pre increment(++a) = �nce arttir

       post incrementte a ya verilen g�revi yapar.
       g�revi yaptiktan sonra bu a bellekte tutulurken degeri bir arttirilir.
       a nin yeni degeri a+1 olmus olur.
       a nin yeni degeri i�leme tabi tutulmaz.

       pre incrementtte ise �nce a'nin degeri 1 artt�l�r.
       a nin yeni degeri a+1 olmus olur ve isleme tabi tutulur.g�revi yeni(a+1) a yapar.

    */
    printf("%d",a);
    printf("\n%d",++a);

    printf("\n\n%d",b);
    printf("\n%d",b++);
    printf("\n%d",b);

    return 0;
}
