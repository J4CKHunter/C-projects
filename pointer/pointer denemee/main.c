#include <stdio.h>
#include <stdlib.h>
void fonkscan(int *,int,int);
void fonkprint(int *,int,int);
int main()
{
    int boyut,eni;

    printf("matrisinizin boyu:");
    scanf("%d",&boyut);
    printf("\nmatrisinizin eni:");
    scanf("%d",&eni);

    int *p=(int *)malloc(sizeof(int)*boyut*eni);

    fonkscan(p,boyut,eni);
    fonkprint(p,boyut,eni);

}
void fonkscan(int *a,int b,int c){

    printf("\nmatrisinizin elemanlarini giriniz:");

    for (int i=0;i<b*c;i++){
        scanf("%d",&a[i]);
    }


}

void fonkprint(int *a,int b,int c){

    printf("\n");

    for (int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(a+i*b+j));
        }
        printf("\n");
    }







}
