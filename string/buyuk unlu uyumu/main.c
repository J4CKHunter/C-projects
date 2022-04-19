#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char cumle[102];
    printf("cumle girin:");
    fgets(cumle,100,stdin);
    cumle[strlen(cumle)-1]=' ';

    char ince[100];
    char kalin[100];
    char uymayan[100];

    int incecounter=0;
    int kalincounter=0;
    int y=0,u=0,p=0,i=0;


    for(i;i<strlen(cumle);i++){
        int j;
        for(j=0;cumle[j+i]!=' ';j++){
            if(cumle[j+i]=='e' || cumle[j+i]=='i'){
                incecounter++;
            }
            if(cumle[j+i]=='a' || cumle[j+i]=='o' || cumle[j+i]=='u'){
                kalincounter++;
            }
        }

        int k,l,m,n;
        if(incecounter!=0 && kalincounter==0){
                for(k=i;k<i+j;k++){
                    ince[y]=cumle[k];
                    y++;
                }

                 ince[y]='\n';
                 y++;
        }
           if(kalincounter!=0 && incecounter==0){
                for(l=i;l<i+j;l++){
                    kalin[u]=cumle[l];
                    u++;
                }
                kalin[u]='\n';
                u++;
        }

        if(kalincounter!=0 && incecounter!=0){
            for(m=i;m<i+j;m++){
                    uymayan[p]=cumle[m];
                    p++;
                }
                uymayan[p]='\n';
                p++;
        }

        if(kalincounter==0 && incecounter==0){
            for(n=i;n<i+j;n++){
                    uymayan[p]=cumle[n];
                    p++;
                }
                uymayan[p]='\n';
                p++;
        }
        incecounter=0;
        kalincounter=0;
        i=i+j;
    }

    printf("cumlede bulunan ve buyuk unlu uyumuna uyan kelimeler:");

    printf("\n\n1.kalin kelimeler:\n");
    int bb;
    for(bb=0;bb<u;bb++){
        printf("%c",kalin[bb]);
    }
    printf("\n2.ince kelimeler:\n");
    int b;
    for(b=0;b<y;b++){
        printf("%c",ince[b]);
    }

    printf("\ncumlede bulunan ve buyuk unlu uyumuna uymayan kelimeler:\n");
    int bbb;
    for(bbb=0;bbb<p;bbb++){
        printf("%c",uymayan[bbb]);
    }
    return 0;
}
