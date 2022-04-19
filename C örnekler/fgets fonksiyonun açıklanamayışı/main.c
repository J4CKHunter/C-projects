#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name=(char *)malloc(sizeof(char)*11);
    char *surname=(char *)malloc(sizeof(char)*11);

    printf("Who are you? ");
    fgets(name,11,stdin);
    name[10]='\0';

    printf("Who are you? ");
    fgets(surname,11,stdin);
    surname[10]='\0';

    printf("--->%s<----",name);
    printf("--->%s<----",surname);


}
