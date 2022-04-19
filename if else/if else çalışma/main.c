#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi;
    printf("Lutfen bir sayi giriniz:");
    scanf("%f",&sayi);

   if(sayi>5)
    {
        printf("Buyuktur.");
    }

    else
    {
        printf("Buyuk degildir.");
    }

    return 0;

}
