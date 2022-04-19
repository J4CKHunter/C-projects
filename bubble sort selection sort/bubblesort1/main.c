#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q,w,e,i,j,boyut,temp;
    printf("Dizinin eleman sayisini girin:");
    scanf("%d",&boyut);
    int dizi[boyut];
    printf("\nDizinin elemanlarini girin:");
    for(q=0;q<boyut;q++){
        scanf("%d",&dizi[q]);
    }
    printf("\nDizinin elemanlari:");
    for(w=0;w<boyut;w++){
        printf("%d ",dizi[w]);
    }

    for(i=1;i<boyut;i++){
        for(j=0;j<boyut-1;j++){
            if(dizi[j]>dizi[j+1]){
            temp=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=temp;
        }
    }
    }
    printf("\nDizinin siralanmis sekli:");
    for(e=0;e<boyut;e++){
        printf("%d ",dizi[e]);
    }
}
