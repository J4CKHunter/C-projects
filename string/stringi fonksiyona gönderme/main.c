#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fonk(char *x,int y){


    char temp;
    for(int i=0;i<y/2;i++){

        temp=x[i];
        x[i]=x[y-i-1];
        x[y-i-1]=temp;

    }

    printf("%s",x);


}

int main()
{
    char *string=(char *)malloc(sizeof(char)*100);
    printf("bir kelime girin:");
    scanf("%s",string);

    int a=strlen(string);

    fonk(string,a);

}
