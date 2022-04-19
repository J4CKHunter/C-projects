#include <stdio.h>
#include <stdlib.h>

int main()
{

// ÝNT TE MATRÝS TANIMLARKEN KÖÞELÝ PARANTEZ ÝÇÝNDE KAÇA KAÇ BÝR MATRÝS OLDUGUNU BELÝRTÝYORUZ
// MATRÝSTE ADLANDIRMALAR 0 DAN BAÞLIYOR
// YANÝ 1. SATIR = 0 / 2. SATIR=1 / 1.SUTUN = 0 / 2.SUTUN = 1 ...GÝBÝ...

    int matris[2][2];
    int sutun1,sutun2;
    int satir1,satir2;

    sutun1=1;
    sutun2=2;
    satir1=1;
    satir2=2;

    matris[0][0]=10;
    matris[0][1]=20;
    matris[1][0]=30;
    matris[1][1]=40;

    printf("   %d    %d\n",sutun1,sutun2);
    printf("%d  %d   %d\n",satir1,matris[0][0],matris[0][1]);
    printf("%d  %d   %d",satir2,matris[1][0],matris[1][1]);

    return 0;
}
