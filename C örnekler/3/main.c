#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int saat,bakteri;
    printf("kac saat gecti:");
    scanf("%d",&saat);
    bakteri=pow(2,saat);
    printf("\nBakteri sayisi:%d",bakteri);
    return 0;
}
