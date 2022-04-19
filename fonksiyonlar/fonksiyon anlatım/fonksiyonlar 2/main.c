#include <stdio.h>
#include <stdlib.h>


int f(int,int,int);
int main()
{

    int x,y,z;
    printf("Lutfen sirasıyla x,y ve z degiskenlerini giriniz:");
    scanf("%d%d%d",&x,&y,&z);
    printf("\Sonuc:%d",f(x,y,z));

}

int f(int x,int y,int z){

    return 5*x+7*y-z;

}

