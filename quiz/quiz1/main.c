#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MatrisVektorCarp(float x[][100],int y[],int z){

    float SonucDizi[z];
    float toplam=0;
    for(int q=0;q<z;q++){

        for(int a=0;a<z;a++){
            for(int b=0;b<z;b++){
                toplam=toplam+(x[a][b]*y[b]);
            }
            SonucDizi[a]=toplam;
            toplam=0;
        }
    }

    for(int w=0;w<z;w++){
        for(int e=0;e<z;e++){
            printf("%f  ",x[w][e]);
        }
        printf("%d  ",y[w]);
        printf("%f",SonucDizi[w]);
        printf("\n");
    }
}

int main()
{
    float matris[100][100];
    int dizi[100];
    int boyut;

    srand(time(NULL));

    printf("Kare matrisin boyutunu giriniz:");
    scanf("%d",&boyut);

    for (int i=0;i<boyut;i++){
        for (int j=0;j<boyut;j++){
            matris[i][j]=100+(rand()%900);
            matris[i][j]=matris[i][j]/1000;
        }
    }

    for(int k=0;k<boyut;k++){
        dizi[k]=rand()%10;
    }
    printf("\n\n");
    MatrisVektorCarp(matris,dizi,boyut);

}

