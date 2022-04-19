#include <stdio.h>
#include <stdlib.h>

int asaltester(int);
void asalbolenler(int);

int main()
{
    int sayi;
    printf("Asal bolenleri bulacagiz.Sayi giriniz:");
    scanf("%d",&sayi);
    printf("\nAsal bolenler:");
    asalbolenler(sayi);
}

int asaltester(int x){
    int flag;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }

    if(flag==1)
        return 0;

    else
        return 1;

}

void asalbolenler(int y){
    for(int k=2;k<=y;k++){
        if(y%k==0 && asaltester(k)==1)
            printf("%d ",k);

    }
}
