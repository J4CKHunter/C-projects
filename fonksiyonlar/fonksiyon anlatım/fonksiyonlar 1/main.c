#include <stdio.h>
#include <stdlib.h>

int f(int,int);
int main()
{
    int a,b;

    printf("Lutfen a degiskenini giriniz:");
    scanf("%d",&a);
    printf("\nLutfen b degiskenini giriniz:");
    scanf("%d",&b);
    printf("\nSonuc:%d",f(a,b));

}

int f(int x,int y){
    return x*x+2*x*y+y*y;
}


