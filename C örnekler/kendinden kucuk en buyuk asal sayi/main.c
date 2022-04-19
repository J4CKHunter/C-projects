#include <stdio.h>
#include <stdlib.h>
int asaltester(int);
int f(int);

int main()
{
    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    printf("\n%d",f(sayi));
}

int asaltester(int i){

 int flag=1;
 for(int a=2;a<i;a++){
    if(i%a==0){
        flag=0;
        break;
    }
 }

    if(flag==0)
        return 0;
    else
        return 1;

}

int f(int x){
    for(int i=x-1;i>=2;i--){
    if(asaltester(i)==1){
        return i;
    }
    }
}
