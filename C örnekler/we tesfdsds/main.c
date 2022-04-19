#include <stdio.h>
#include <stdlib.h>

void fonk(int *,int);

int main()
{
    int dizi[2][2]={1,2,3,4};

    int *p;
    p=&dizi;

    fonk(p,2);


}
void fonk(int *a,int b){

    for(int i=0;i<b;i++){
        for(int j=0;j<b;j++){
            printf("%d  ",*(a+i*b+j));
        }
        printf("\n");
    }


}
