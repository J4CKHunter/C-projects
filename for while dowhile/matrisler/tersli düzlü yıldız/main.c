#include <stdio.h>
#include <stdlib.h>

int main()
{
        for(int i=1;i<=5;i++){

            for(int j=5-i;j>=1;j--){

                printf(" ");
            }


            for(int k=1;k<=i;k++){

                printf("*");
            }
            printf("\n");

        }




        for(int a=5;a>=1;a--){

            for(int b=a;b>=1;b--){
                printf("*");
            }
                printf("\n");
            }






        for(int z=5;z>=1;z--)
        {
            for(int x=5-z;x>=1;x--){

                printf(" ");
            }

            for(int c=z;c>=1;c--){

                printf("*");
            }

            printf("\n");

        }




        for(int q=1;q<=5;q++){

            for(int y=q;y>=1;y--)
            {

                printf("*");

            }
            printf("\n");
        }




    return 0;


}
