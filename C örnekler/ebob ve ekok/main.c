#include <stdio.h>
#include <stdlib.h>

int ekok(int,int);
int ebob(int,int);

int main()
{
    int s1,s2;

    printf("ebob ve ekok bulma programina hosgeldiniz.\nLutfen iki sayi giriniz.");
    scanf("%d%d",&s1,&s2);
    printf("\nGirilen sayilar %d ve %d.",s1,s2);

    printf("\nebob(%d,%d)=%d",s1,s2,ebob(s1,s2));
    printf("\nekok(%d,%d)=%d",s1,s2,ekok(s1,s2));

}

int ebob(int x,int y){

    int i=2;
    int sonuc=1;
    while(i<=x || i<=y){

        if(x%i==0 && y%i==0){
            x=x/i;
            y=y/i;
            sonuc=sonuc*i;
        }

        else {
            i++;
        }


        if (x==1 || y==1){
            break;
        }

    }

        return sonuc;
}

int ekok(int x,int y){

 return (x*y)/ebob(x,y);

}

