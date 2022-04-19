#include <stdio.h>
#include <stdlib.h>

int main()
{
    int giris;
    scanf("%d",&giris);

    for(int a=1;a<=giris;a++){

        for(int b=giris-a;b>=1;b--){
            printf(" ");
        }
        for(int c=a;c>=1;c--){
            printf("*");
        }
            printf("\n");
    }
    return 0;
}



