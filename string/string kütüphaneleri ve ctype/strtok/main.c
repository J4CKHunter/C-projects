#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[200] = "Bu ornek;noktalama isaretlerini ve bosluklari kullanarak cumleyi parcalar! Bu cumle,test icin yazilmistir.";

    const char *ayrac = " .,;!"; // bosluk, nokta ve virgul, noktali virgul...

    char *kelime = strtok(cumle, ayrac);

    while (kelime != NULL)
    {
        printf("%s\n", kelime);
        kelime = strtok(NULL, ayrac);
    }

    return 0;
}
