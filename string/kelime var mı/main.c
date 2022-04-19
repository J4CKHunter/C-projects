#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fonk(char *cumle,char *aranan,int *yer){

    int a=strlen(cumle)-1;
    int b=strlen(aranan)-1;

    int c=0;
    int j;



    for(int i=0;i<a-b+1;i++){

        for(j=0;j<b;j++)

            if(cumle[i+j]!=aranan[j]){
                break;
            }


        if(j==b){

           yer[c]=i;
           c++;
        }

    }

    if(c==0)
        return 0;

    else
        return c;
}


int main()
{

    char cumle[102];

    printf("lutfen bir cumle girin:");
    fgets(cumle,100,stdin);

    char aranan[102];
    printf("\ncumlede aramak istediginiz kelimeyi giriniz:");
    fgets(aranan,100,stdin);

    int yer[100];

    int q=fonk(cumle,aranan,yer);

    if(q!=0){
       printf("kelimeniz cumlede vardir yeri veya yerleri:");
       for(int w=0;w<q;w++){
            printf("%d ",yer[w]+1);
        }
    }
    else
        printf("\nyoktur");
}
