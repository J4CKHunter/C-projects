#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char a;
   printf("lutfen bir sey girin:");
   scanf("%c",&a);

   if(isalpha(a))
        printf("harf girdiniz");
   else
        printf("harf girmediniz");

}
