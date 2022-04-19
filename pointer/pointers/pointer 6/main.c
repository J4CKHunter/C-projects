#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a=(int*)malloc(sizeof(int)*10);
    a[3]=9;
    printf("%d",a[3]);
    printf("\n%d",*(a+3));
}
