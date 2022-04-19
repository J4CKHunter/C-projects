#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
    printf("bir sey girin:");
    scanf("%c",&a);

    if(isalpha(a)){

        if(isupper(a)){
            printf("buyuk harf girdiniz");
            printf("\nsimdi girdiginiz harfi kucultuyorum %c",tolower(a));
    }

        if(islower(a)){
            printf("kucuk harf girdiniz");
            printf("\nsimdi girdiginiz harfi buyultuyorum %c",toupper(a));
        }
    }

    else
        printf("harf girmediniz");

}
