#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ad[20];
    char *soyad=(char *)malloc(sizeof(char)*20);

    printf("merhaba adiniz nedir?:");
    scanf("%s",ad);
    printf("\nsoyadiniz nedir?:");
    scanf("%s",soyad);
    printf("\nmerhaba %s %s",ad,soyad);

    printf("\n\nadinizin 3.karakteri %c,soyadinizin 5.karakteri %c",ad[2],soyad[4]);
}
