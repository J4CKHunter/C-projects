#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,d,e,f,g,h,j;

    printf("Lutfen ucgenin kenarlarini giriniz:");
    scanf("%lf%lf%lf",&a,&b,&c);

    d=a-b;
    e=b-c;
    f=a-c;

    g=a+b;
    h=b+c;
    j=a+c;



    if (g>c && c>fabs(d))
    {

            printf("\nUcgen olmanin 1.sartini sagladiniz.ikinci sarta bakiliyor.");

            if (h>a && a>fabs(e))
                printf("\nUcgen olmanin 2. sartini sagladiniz.son sarta bakiliyor.");
            else
            printf("\nUcgen olmanin 2. sartini saglamadi.");

                if (j>b && b>fabs(f))
                    printf("\nUcgen onaylandi.");
                else
                    printf("\nUcgen olmanin 3. sartini saglamadi.");

    }



  else
  {
      printf("\nUcgen olmanin 1.sartini saglamadi.");

  }


    return 0 ;
}
