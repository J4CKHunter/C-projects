#include <stdio.h>


void asal_bolenler(int);
int asal_mi(int);

int main(void) {
 int sayi;
 printf("Sayiyi giriniz: ");
 scanf("%d",&sayi);
 asal_bolenler(sayi);
 return 0;
}
void asal_bolenler(int number){
 int i;
 for(i=2;i<=number;i++){
 if(number%i==0){
 if(asal_mi(i))
 printf("%d ",i);
 }
 }
}
int asal_mi(int number){
 int i, sayac=0;
 for(i=2;i<number;i++)
 {
 if(number%i==0)
 {
 sayac++;
 }
 }
 if(sayac==0)
 return 1;
 else
 return 0;
}
