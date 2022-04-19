#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("matrisin boyutunu giriniz:");
    scanf("%d",&boyut);

    int *p=(int*)malloc(sizeof(int)*boyut);

    printf("\nmatris elemanlarini giriniz:");

    for(int q=0;q<boyut*boyut;q++){
            scanf("%d",&p[q]);
    }


    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            printf("%d ",*(p+i*boyut+j));
        }
        printf("\n");
    }
}
