#include <stdio.h>
#include <stdlib.h>

int main()
{

    char yazi1[10] = "test";
    char yazi2[10] = "test";

    printf("yazi1: %u\n", yazi1);
    printf("yazi2: %u\n", yazi2);
    int sonuc = strcmp(yazi1, yazi2);

    if (sonuc == 0)
        printf("yazi1 ve yazi2 esit\n");
    else if (sonuc < 0)
        printf("alfabetik olarak yazi1 < yazi2\n");
    else
        printf("alfabetik olarak yazi1 > yazi2\n");
}
