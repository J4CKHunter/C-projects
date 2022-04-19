#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int q,w,i,j,e,boyut,key,temp;
    printf("Dizinin kac elemanli oldugunu girin:");
    scanf("%d",&boyut);
    int dizi[boyut];

    for(q=0;q<boyut;q++){
        dizi[q]=rand()%100;
    }
    printf("\nDizinin elemanlari:");
    for(w=0;w<boyut;w++){
        printf("%d ",dizi[w]);
    }

    for(i=0;i<boyut;i++){
        key=i;
        for(j=i+1;j<boyut;j++){
            if(dizi[key]>dizi[j])
                key=j;
        }
        temp=dizi[key];
        dizi[key]=dizi[i];
        dizi[i]=temp;

    }
    printf("\nDizinin siralanmis sekli:");
    for(e=0;e<boyut;e++){
        printf("%d ",dizi[e]);
    }
}
