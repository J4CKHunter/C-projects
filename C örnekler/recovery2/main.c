#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("1.matrisiniz kaca kac:");
    scanf("%d%d",&a,&b);
    int dizi1[a][b];
    printf("\n1.matrisinizin elemanlarini giriniz:");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&dizi1[i][j]);
        }
    }

    printf("\n2.matrisiniz kaca kac:");
    scanf("%d%d",&c,&d);
    int dizi2[c][d];
    printf("\n2.matrisinizin elemanlarini girin:");
    for(int k=0;k<c;k++){
        for(int l=0;l<d;l++){
            scanf("%d",&dizi2[k][l]);
        }
    }

    if(b==c){
        int dizi3[a][d];

        for(int ab=0;ab<a;ab++){
             for(int abc=0;abc<d;abc++){
                for(int q=0;q<b;q++){
                dizi3[ab][abc]=dizi3[ab][abc]+(dizi1[ab][q]*dizi2[q][abc]);
            }
          }
        }


        printf("\n\n1.ve2.matrisin carpimi:\n");
        for(int u=0;u<a;u++){
            for(int p=0;p<d;p++){
                printf("  %d   ",dizi3[u][p]);
        }
        printf("\n");
    }
    }


}
