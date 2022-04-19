#include <stdio.h>
#include <stdlib.h>

int f(int [],int,int [],int,int[]);
int main()
{
    int b1,b2;

    int d1[5]={1,2,3,4,5};
    int d2[6]={6,7,8,9,10,11};
    int s[11];
    int *p;
    p=&s;

    f(d1,5,d2,6,s);

    for(int w=0;w<11;w++){
        printf("%d ",s[w]);
    }
    printf("%d");

}

int f(int d1[],int b1,int d2[],int b2,int s[]){

    int i,k;
    for(i=0;i<b1;i++){
        s[i]=d1[i];
    }

    for(k=0;k<b2;i++,k++){
        s[i]=d2[k];
    }

    return s;

}
