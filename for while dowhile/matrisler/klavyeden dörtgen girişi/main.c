#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int en,boy;
    printf("Dikdortgenin enini girin:");
    scanf("%d",&en);
    printf("\nDikdortgenin boyunu girin:");
    scanf("%d",&boy);


    for(a=1;a<=boy;a++){

        for(b=1;b<=en;b++){
            printf("*");
        }
            printf("\n");
    }

return 0;

}





