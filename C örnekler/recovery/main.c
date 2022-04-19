#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;

    printf("dizi 1 in satir ve sutun sayisi sirayla girin:");
    scanf("%d%d",&a,&b);

    int dizi1[a][b];
    printf("\ndizi1 in elemanlarini girin:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&dizi1[i][j]);
        }
    }


    printf("\ndizi 2 in satir ve sutun sayisi sirayla girin:");
    scanf("%d%d",&c,&d);

    int dizi2[c][d];
    printf("\ndizi2 nin elemanlarini girin:");
    for(int q=0;q<c;q++){
        for(int w=0;w<d;w++){
            scanf("%d",&dizi2[q][w]);
        }
    }

    printf("\n\n");
    for(int e=0;e<a;e++){
        for(int r=0;r<b;r++){
            printf("  %d    ",dizi1[e][r]);
        }
        printf("\n");
    }

    printf("\n\n");
    for(int t=0;t<c;t++){
        for(int y=0;y<d;y++){
            printf("  %d    ",dizi2[t][y]);
        }
        printf("\n");
    }

    printf("\n\n");
    if(a==c && b==d){

        int dizi3[a][b];
        for(int k=0;k<a;k++){
            for(int l=0;l<b;l++){
                dizi3[k][l]=dizi1[k][l]+dizi2[k][l];
            }
        }

        for(int m=0;m<a;m++){
            for(int v=0;v<b;v++){
                printf("  %d   ",dizi3[m][v]);
            }
            printf("\n");
        }


    }


}
