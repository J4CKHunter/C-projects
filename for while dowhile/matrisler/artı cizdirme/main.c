#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,c,d,e;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    printf("\n\n");

    c=sayi%2;
    d=sayi-2;
    e=sayi-1;

    if(c==1){

       for(int a=1;a<=e/2;a++){


        for(int i=1;i<=e/2;i++){
            printf("0");
        }
        printf("1");

        for(int k=1;k<=e/2;k++){
            printf("0");
        }

        printf("\n");
       }


     for(int b=1;b<=sayi;b++){
        printf("1");
     }
     printf("\n");

       for(int u=1;u<=e/2;u++){


        for(int l=1;l<=e/2;l++){
            printf("0");
        }
        printf("1");
        for(int m=1;m<=e/2;m++){
            printf("0");
        }

        printf("\n");
       }
    }


    if(c==0){

        for(int aa=1;aa<=d/2;aa++){
            for(int bb=1;bb<=d/2;bb++){
                printf("0");
            }
            printf("11");
            for(int cc=1;cc<=d/2;cc++){
                printf("0");
            }
            printf("\n");
        }
        for(int dd=1;dd<=2;dd++){
            for(int ee=1;ee<=sayi;ee++){
                printf("1");
            }
            printf("\n");
        }
        for(int aaa=1;aaa<=d/2;aaa++){
            for(int bbb=1;bbb<=d/2;bbb++){
                printf("0");
            }
            printf("11");
            for(int ccc=1;ccc<=d/2;ccc++){
                printf("0");
            }
            printf("\n");
        }
    }
}
