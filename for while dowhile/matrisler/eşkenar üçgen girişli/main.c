#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   scanf("%d",&x);

   for(int i=1;i<=x;i++){

        for(int j=x-i;j>=1;j--){
            printf(" ");
        }
        for (int q=1;q<=i*2-1;q++){
            printf("* ");
        }
        printf("\n");

    }

    for(int s=1;s<=x;s++){

        for(int b=0;b<s-1;b++){

            printf(" ");
        }

        for(int y=x+1-s; y>=1 ;y--){

            printf("* ");

        }
        printf("\n");

    }

    printf("\n\n");


    return 0;
}
