#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ilk_kelime[20]="ilk kelime";
    char ikinci_kelime[20]="ikinci kelime";
    char *ilk=ilk_kelime;
    char *ikinci=ikinci_kelime;

    printf("1=%s , 2=%s ",ilk,ikinci);

    //shallow copy
    ilk=ikinci;
    printf("\n\n1=%s , 2=%s ",ilk,ikinci);


    ilk[2]='x';
    printf("\n\n1=%s , 2=%s ",ilk,ikinci);

}
