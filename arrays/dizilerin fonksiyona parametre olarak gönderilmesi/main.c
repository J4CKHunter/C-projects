#include <stdio.h>
#include <stdlib.h>

void f(int a[]){

    a[0]=5;
    a[1]=4;
    a[2]=3;
    a[3]=2;
    a[4]=1;
}
int main()
{
    int dizi[5]={1,2,3,4,5};
    f(dizi);
    printf("%d %d %d %d %d",dizi[0],dizi[1],dizi[2],dizi[3],dizi[4]);

}


