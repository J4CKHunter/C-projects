#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int dizi[7][7];
    dizi[0][0]=rand()%50;


    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            dizi[i][j]=1+rand()%50;
            }
        }

    int dizi2[7][7];

    for(int e=0;e<7;e++){
        for(int r=0;r<7;r++){
            dizi2[e][r]=dizi[e][r];
        }
    }

    for(int v=0;v<7;v++){
        for(int b=0;b<7;b++){
            for(int n=0;n<7;n++){
                for(int m=0;m<7;m++){
                    if(dizi[v][b]==dizi2[n][m]){
                        dizi[v][b]=1+rand()%50;
                    }

                }
            }
        }

    }



    for(int q=0;q<7;q++){
        for(int w=0;w<7;w++){
            printf(" %d ",dizi[q][w]);
        }
        printf("\n");
    }

}
