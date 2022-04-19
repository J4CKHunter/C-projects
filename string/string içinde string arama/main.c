#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_ara(const char *cumle, const char * aranan)
{
    int j=0;
    int boyutstring=strlen(cumle)-1;
    int boyutaranan=strlen(aranan)-1;


    for (int i=0;i<boyutstring-boyutaranan+1;i++){

        for (j;j<boyutaranan;j++){

            if (cumle[i+j] != aranan[j]){
                break;
            }
        }
        if (j == boyutaranan)
            return 1;
    }


    return 0;
}

int main()
{
    char cumle[100];
    char aranan[20];

    printf("bir cumle girin: ");
    fgets(cumle,100,stdin);

    printf("aranan kelime: ");
    fgets(aranan,20,stdin);


    int x=string_ara(cumle,aranan);

    if (x==0)
    {
        printf("aranan kelime cumlede yok\n");
    }
    else
    {
        printf("aranan kelime cumlede var\n");
    }
    return 0;
}

