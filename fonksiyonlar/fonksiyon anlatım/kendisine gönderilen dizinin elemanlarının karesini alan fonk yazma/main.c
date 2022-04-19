#include <stdio.h>
#include <stdlib.h>

void f(int [],int);
int main()
{
    int d[5]={5,6,9,8,4};
    f(d,5);

    for(int i=0;i<5;i++){
        printf("%d ",d[i]);
    }
}

void f(int x[],int y){

    for(int k=0;k<y;k++){
        x[k]=x[k]*x[k];
    }

}
