#include <stdio.h>
int main()
{
    int n[10] = {10, 14, 19, 26, 27, 11, 33, 35, 42, 44};


        int i, aranan;
        printf("aramak istediginiz sayiyi giriniz:");
        scanf("%d", &aranan);
        int yer = -1;

        for ( i = 0 ; i < 10 ; i++ ){
            if (n[i] == aranan)
                yer = i;
        }

        if (yer == -1)
            printf("dizide yok\n");

        else
            printf("dizide bulundugu yer: %d\n", yer);


}
