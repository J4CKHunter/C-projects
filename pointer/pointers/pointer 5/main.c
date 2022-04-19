#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=10;
   int *p;
   p=&a;

   printf("%d",a);
   printf("\n%d",*p);
   *p=20;
   printf("\n%d",a);
}
