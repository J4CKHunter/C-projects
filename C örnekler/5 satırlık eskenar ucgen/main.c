#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i=1;i<=5;i++){

        for(int j=5-i;j>=1;j--){
            printf(" ");
        }
        for (int q=1;q<=i;q++){
            printf("* ");
        }
        printf("\n");

    }
    return 0;

}
