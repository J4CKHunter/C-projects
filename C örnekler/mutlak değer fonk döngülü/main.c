#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,d,e,f;

    printf("Lutfen ucgenin kenarlarini giriniz:");
    scanf("%lf%lf%lf",&a,&b,&c);

    d=a-b;
    e=a-c;
    f=b-c;



    printf("%f %f %f",fabs(d),fabs(e),fabs(f));

    return 0;

}
