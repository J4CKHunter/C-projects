#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fonc(int);
int main()
{
    int sayi;
    printf("sayi girin:");
    scanf("%d",&sayi);
    printf("\n%d",fonc(sayi));
}

int fonc(int x){

    float c,d;
    c=log2(x);
    d=round(c);

    return d;
}
