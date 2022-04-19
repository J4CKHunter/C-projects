#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    fgets(str,28,stdin);

    char *cevrilemeyen_kisim;
    double cevrilen_kisim;

    cevrilen_kisim = strtod(str, &cevrilemeyen_kisim);

    printf("cevrilen kisim: |%f|\n", cevrilen_kisim);
    printf("cevrilmeyen kisim: |%s|", cevrilemeyen_kisim);
}
