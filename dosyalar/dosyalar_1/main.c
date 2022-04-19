#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *girdi;
    girdi=fopen("girdiler.txt","w");
    int a=10,b=15;
    char c='e';
    fprintf(girdi,"%d %d %c",a,b,c);
    fclose(girdi);

    FILE *cikti;
    cikti=fopen("girdiler.txt","r");
    int d,e;
    char f;
    fscanf(cikti,"%d %d %c",&d,&e,&f);
    fclose(cikti);

    printf("%d %d %c",d,e,f);
}
