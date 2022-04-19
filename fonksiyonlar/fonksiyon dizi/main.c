#include <stdio.h>
#include <stdlib.h>

void f(int);
void g(int[]);

int main()
{
    int a = 5;
    printf("a: %d\n",a);

    f(a);
    printf("a: %d\n",a);

    int d[3]={1,2,3};
    printf("dizi=%d %d %d\n",d[0],d[1],d[2]);

    g(d);
    printf("dizi=%d %d %d\n",d[0],d[1],d[2]);

    return 0;

}

void f(int a){
    a=10;
}

void g(int d[]){
    d[0]=3;
    d[1]=1;
    d[2]=2;

}
