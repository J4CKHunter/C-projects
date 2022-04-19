#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    b=2;
    c=a-1;
    int flag;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&a);


    while(b<=c){

        if(a%b==0)
        {
            flag=1;
            break;
        }
        b++;
    }

    if (flag==1)
        printf("\nGirilen sayi Asal sayi degildir");
    else
        printf("\nAsal sayidir.");

    return 0;

}
