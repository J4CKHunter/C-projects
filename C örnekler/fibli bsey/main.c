#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sayi;
    printf("lutfen kacli fib dizisi istediginizi giriniz:");
    scanf("%d",&sayi);
    int a[sayi];
    a[0]=1;
    a[1]=1;
    printf("\n");

    for(int j=0;j<2;j++){
        printf("%d ",a[j]);
    }
    for(int i=2;i<sayi;i++){

        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }


}
