#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,yil;

    printf("Bulundugunuz yili yaziniz:");
    scanf("%d",&a);
    printf("\nKac yasindasiniz peki?");
    scanf("%d",&b);
    yil=a-b;
    printf("Dogdugunuz yil=%d",yil);

    return 0;
}
