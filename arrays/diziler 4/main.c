#include <stdio.h>
#include <stdlib.h>


void matristoplam(int,int);
int matriscarpim(int,int);

int main()
{
    int satir1,sutun1;
    int satir2,sutun2;
    int secim;

    printf("Lutfen 1. matrisinizin satir ve sutun sayisini sirayla giriniz:");
    scanf("%d%d",&satir1,&sutun1);
    printf("\nLutfen 1. matrisinizin elemanlarini sirayla giriniz:");

    int matris1[sutun1][sutun1];

    for(int i=0;i<satir1;i++){
        for(int j=0;j<sutun1;j++){
            scanf("%d",&matris1[i][j]);
        }
    }


    printf("\nLutfen 2.matrisinizin satir ve sutun sayisini sirayla giriniz:");
    scanf("&d%d",&satir2,&sutun2);
    printf("\nLutfen 2. matrisinizin elemanlarini sirayla giriniz:");

   int matris2[sutun2][sutun2];

    for(int k=0;k<satir1;k++){
        for(int l=0;l<sutun1;l++){
            scanf("%d",&matris1[k][l]);
        }
    }

    printf("\nLutfen yapmak istediginiz islemi seciniz:");
    scanf("%d",&secim);
    printf("\n\n1.Toplama\n2.Carpma");

    switch(secim){

    case 1 : matristoplam(matris1,matris2);
             break;

    }


}

void matristoplam(int x,int y){

    for(int q=0;q<x;q++){
        for(int w=0;q<y;q++){

            int toplam[a][b]=matris1[a][b]+matris2[a][b];
        }
    }


    for(int e=0;e<x;e++){
        for(int u=0;u<y;u++){
            printf("\n   %d",toplam[x][y]);
        }
    }


}


