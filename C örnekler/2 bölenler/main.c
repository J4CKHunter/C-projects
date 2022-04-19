#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    printf("\nSayinin tam bolenleri sunlardir:");
    for(int i=1;i<=sayi;i++){
        if(sayi%i==0){
            printf("%d ",i);
        }
    }
}
