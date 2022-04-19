#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,j;

    printf("kaca kadar olan asal sayilari bulalim?");
    scanf("%d",&a);

    for(int i = 2 ; i <= a ; i++) {

        for(j = 2 ; j <= (i/2) ; j ++ ){

            if(i%j == 0)
                break;

        }

        if(j==(i/2)+1)
            printf("\n%d",i);

    }
}
