#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ab;
    char cumle[1000];
    char aranan[1000];

    printf("bi cumle bi sey girin:");
    fgets(cumle,1000,stdin);
    printf("\narayacaginiz seyi girin:");
    fgets(aranan,1000,stdin);

    int a,b;
    a=strlen(cumle);
    b=strlen(aranan);

    for(int i=0;i<a-b+1;i++){
        for(int j=0;j<b;j++){
            if(cumle[i+j]!=aranan[j]){
                break;
            }
        }
        if(i==b){
            ab=1;
        }
    }

    if(ab==1)
        printf("\naradiginiz kelime cumlede var");

    if(ab!=1)
        printf("\naradiginiz kelime cumlede yok");
}
