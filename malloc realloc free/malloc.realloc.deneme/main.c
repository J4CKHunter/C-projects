#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("kaclik dizi istiyorsunuz:");
    scanf("%d",&boyut);

    char *p=(char*)malloc((1+boyut)*sizeof(char));
    printf("\ndizinizin icine %d basamakli deger girin:",boyut);
    scanf(" %s",&(*p));
    printf("\n%s",p);


    printf("\n\nkaclik dizi istiyorsunuz:");
    scanf("%d",&boyut);
    p=realloc(p,sizeof(char)*(boyut+1));
    printf("\ndizinizin icine %d basamakli deger girin:",boyut);
    scanf(" %s",&(*p));
    printf("\n%s",p);


    free(p);

}
