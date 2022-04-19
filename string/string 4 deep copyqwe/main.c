#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ilk_kelime[20]="ilk kelime";
    char ikinci_kelime[20]="ikinci kelime";
    char *ilk=ilk_kelime;
    char *ikinci=ikinci_kelime;

    printf("1=%s , 2=%s ",ilk,ikinci);
    printf("\n\n1.string uzunlugu=%d\n2.string uzunlugu=%d",strlen(ilk),strlen(ikinci));


    //deep copy

    int i=0;
    char c=ikinci[0];
    while(c!='\0'){
        ilk[i]=ikinci[i];
        i++;
        c=ikinci[i];

    }

    // deep copy fonksiyonu strcpy(ilk,ikinci)

    printf("\n\n1=%s , 2=%s ",ilk,ikinci);

    ilk[2]='x';
    printf("\n\n1=%s , 2=%s ",ilk,ikinci);





}
