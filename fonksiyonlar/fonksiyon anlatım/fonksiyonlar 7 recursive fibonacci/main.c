#include <stdio.h>
#include <stdlib.h>

int fib(int);
int main()
{
    int x;
    printf("Hangi siradaki fibonacci sayisini istersiniz:");
    scanf("%d",&x);
    printf("\nSayiniz:%d",fib(x));

}

int fib(int x){

    if(x==1 || x==2){
        return 1;
    }

    return fib(x-2)+fib(x-1);

}
