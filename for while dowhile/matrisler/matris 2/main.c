#include <stdio.h>
#include <stdlib.h>

int main()
{

// BÝLGÝSAYAR MATRÝSÝ OKURKEN SATÝR SATÝR OKUR

    int matris[2][3]={10,20,30,40,50,60};

    printf("\n");

    for(int i=0;i<2;i++){

        for(int j=0;j<3;j++){

            printf("   %d   ",matris[i][j]);
        }
        printf("\n");

    }

    return 0;

}
