#include <stdio.h>
#include <stdlib.h>



int g(int *y){
        *y=20;
        printf("%d\n",*y);
}

int main()
{
    int a=10;
    int *p;
    p=&a;

   g(p);
   printf("%d\n",*p);
}

