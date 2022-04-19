#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>
struct Ogrenci
{
    char ad[30];
    char soyad[30];
    int ogrenciNo;
    int kayitYili;
    char TCKimlik[12];
};
int main()
{
    struct Ogrenci liste[20];
    srand(time(NULL));
    for(int i=0; i<20; i++)
    {
        int j;
        for(j=0; j<5; j++)
        {
            liste[i].ad[j]=65+rand()%25;
        }
        liste[i].ad[j]='\0';
        for( j=0; j<7; j++)
        {
            liste[i].soyad[j]=65+rand()%25;
        }
        liste[i].soyad[j]='\0';
        for( j=0; j<10; j++)
        {
            liste[i].TCKimlik[j]=48+rand()%10;
        }
        liste[i].TCKimlik[j]='\0';
        liste[i].ogrenciNo=rand()% 10000;
        liste[i].kayitYili=2006+rand()%12;
    }
    printf("ad\t soyad\t Tckimlikno ogrenci no \t kayit yili\n");
    for(int i=0; i<19; i++)
    {
        printf("%s\t",liste[i].ad);
        printf("%s\t",liste[i].soyad);
        printf("%s\t",liste[i].TCKimlik);
        printf("%d\t",liste[i].ogrenciNo);
        printf("%d\t",liste[i].kayitYili);
        printf("\n");
    }
    printf("buble sort\n");
    for (int i=1; i<20; i++)
    {
        for(int j=0; j<19-1; j++)
        {
            if(strcmp(liste[j].TCKimlik,liste[j+1].TCKimlik)>0)
            {
                struct Ogrenci temp;

                temp=liste[j];
                liste[j]=liste[j+1];
                liste[j+1]=temp;
            }
        }
    }
    printf("ad\t soyad\t Tckimlikno ogrenci no \t kayit yili\n");
    for(int i=0; i<19; i++)
    {
        printf("%s\t",liste[i].ad);
        printf("%s\t",liste[i].soyad);
        printf("%s\t",liste[i].TCKimlik);
        printf("%d\t",liste[i].ogrenciNo);
        printf("%d\t",liste[i].kayitYili);
        printf("\n");
    }
}
