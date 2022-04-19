#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[]="erdem nayin c kodlamayi ogreniyor.";
    char a='r';

    char *ilk_r=strchr(string1,a);

    if(ilk_r==NULL){
        printf("\nyoktur.");
    }

    else{
        printf("\nilk r harfinin oldugu bellek adresi:--->%d<---",ilk_r);
        printf("\ncumlenin geri kalani:--->%s<---",ilk_r);
    }

    printf("\n\n\n");

    char *son_r=strrchr(string1,a);

    if(son_r==NULL){
        printf("\nyoktur.");
    }

    else{
        printf("\nson r harfinin oldugu bellek adresi:--->%d<---",son_r);
        printf("\ncumlenin geri kalani:--->%s<---",son_r);
    }
}
