#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=100;i>=20;i=i-1){

        if (i%3==0 && i%7==0)
        printf(" %d",i);
    }
    return 0;
}
