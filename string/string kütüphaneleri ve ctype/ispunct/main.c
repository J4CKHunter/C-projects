#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
    printf("lutfen bir karakter girin:");
    scanf("%c",&a);

    if(ispunct(a))
        printf("a noktalama isaretidir.");
    else
        printf("a noktalama isareti degildir.");
}
