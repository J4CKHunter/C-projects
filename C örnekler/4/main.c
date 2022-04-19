#include <stdio.h>
#include <stdlib.h>

int main()
{
    int terimsayisi,toplam,sayi;
    terimsayisi=((81-1)/4)+1;
    toplam=0;

    //genelterim=4n-3;

    for(int i=1;i<=terimsayisi;i++){
            sayi=4*i-3;
            toplam=toplam+sayi;
    }
    printf("toplam =%d",toplam);
}
