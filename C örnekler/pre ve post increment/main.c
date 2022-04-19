#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=20;

       /* post increment(a++) = sonradan arttir
       pre increment(++a) = önce arttir

       post incrementte a ya verilen görevi yapar.
       görevi yaptiktan sonra bu a bellekte tutulurken degeri bir arttirilir.
       a nin yeni degeri a+1 olmus olur.
       a nin yeni degeri iþleme tabi tutulmaz.

       pre incrementtte ise önce a'nin degeri 1 arttýlýr.
       a nin yeni degeri a+1 olmus olur ve isleme tabi tutulur.görevi yeni(a+1) a yapar.

    */
    printf("%d",a);
    printf("\n%d",++a);

    printf("\n\n%d",b);
    printf("\n%d",b++);
    printf("\n%d",b);

    return 0;
}
