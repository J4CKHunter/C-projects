#include <stdio.h>
#include <stdlib.h>

int fonk_boyut(char *x){


    int j=0;
    for(int i=0;x[i]!='\n';i++){
            j++;
    }

    return j;
}




void fonk_ara(char *cumle,char harf){

    int boyut=fonk_boyut(cumle);
    int j=0;
    int *yer=(int *)malloc(sizeof(int)*boyut);

    for(int i=0;i<boyut;i++){
        if(cumle[i]==harf){
            yer[j]=i;
            j++;
        }
    }


    if(j!=0){
        for(int q=0;q<1;q++){
        printf("\ngirilen karakter cumle dizisinin ");
        for(int k=0;k<j;k++){
        printf("%d. ",yer[k]);
        }
        printf("yerindedir.");
        }
    }

    if(j==0){
        printf("\naradiginiz harf cumlede bulunmamaktadir.");
    }
}

int main()
{
    char cumle[100];

    printf("lutfen cumle giriniz:");
    fgets(cumle,100,stdin);



    char harf;
    printf("\ncumlede aramak istediginiz harfi giriniz:");
    scanf("%c",&harf);

    fonk_ara(cumle,harf);


    return 0;
}
