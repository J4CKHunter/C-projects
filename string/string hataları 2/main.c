#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *string=(char *)malloc(sizeof(char)*10);
    printf("lutfen max 10 harf olacak sekilde bi sey girin:");
    scanf("%10s",string);
    printf("\n%s",string);

    char string2[10];
    printf("\nlutfen max 10 harf olacak sekilde bi sey girin:");
    scanf("%10s",string2);
    printf("\n%s",string2);

    printf("\n%d",strlen(string));
    printf("\n%d",strlen(string2));
}
