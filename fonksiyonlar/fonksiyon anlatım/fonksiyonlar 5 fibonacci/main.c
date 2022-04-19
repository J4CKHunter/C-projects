#include <stdio.h>
#include <stdlib.h>

int fib(int);
int main()
{
    int x;
    printf("Hangi siradaki fib sayisini istersiniz efenim:");
    scanf("%d",&x);

    if (x==1 || x==2){
        printf("\nSayiniz:1");
    }

    else
    printf("\nSayiniz:%d",fib(x));
}

int fib(int x){
    int a=1;
    int b=1;
    int c;

    for(int i=3;i<=x;i++){

        c=a+b;
        a=b;
        b=c;

    }

    return c;

}
