#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
    printf("lutfen bir karakter girin:");
    scanf("%c",&a);

    if(isdigit(a))
        printf("a rakamdir");
    else
        printf("a harftir");
}
