#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("dosya.txt","w");
    fprintf(filepointer,"erdem nayin 0.123 \nj4ckhunter");
    fclose(filepointer);

    filepointer=fopen("dosya.txt","r");
    char c;
    while(!feof(filepointer)){
        c=getc(filepointer);
        if(c=='\n')
            printf("**altsatir");
        printf("%c",c);
    }
    fclose(filepointer);
}
    char buffer[50];
    while(!feof(filepointer)){

        buffer=getch(filepointer);
        if(c=='\n')





    }
*/
