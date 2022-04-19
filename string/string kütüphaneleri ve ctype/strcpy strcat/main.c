#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[]="erdem";
    char string2[]="nayin";

    char string3[]="kerem";
    char string4[]="kero";

    printf("%s",strcat(string1,string2));

    printf("\n%s",strcpy(string3,string4));
}
