#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,min;
    int dizi[5]={5,8,1,3,7};
    for(int q=0;q<5;q++){
        printf("%d ",dizi[q]);
    }

    for(int i=0;i<4;i++){
        min=i;

        for(int j=1;j<5;j++){
            if(dizi[j]<dizi[min]){
                min=j;
        }
        }

        temp=dizi[i];
        dizi[i]=dizi[min];
        dizi[min]=temp;

    }
    printf("\n\n");
    for(int w=0;w<5;w++){
        printf("%d ",dizi[w]);
    }


}

