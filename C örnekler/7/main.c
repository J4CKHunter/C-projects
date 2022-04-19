#include <stdio.h>
#include <stdlib.h>

int cift(int x)
{

    return x%2 == 0;

}

int sqrt(int s)
{

    int i ;

    for(i = 0; i<s; i++)
    {

        if(i*i>s)

            break;

    }

    return i;

}

int filtre (int (*fp)(int),int *a,int boyut)
{

    int yeniboyut= boyut;

    for(int i = 0; i<yeniboyut; i++)
    {

        if(!fp(a[i]))
        {

            for(int j = i; j<yeniboyut; j++)
            {

                a[j]= a[j+1];

            }

            yeniboyut–-;

            i–-;

        }

    }

    return yeniboyut;

}

int boyutlandir(int a[][4],int (*fp)(int),int boyut)
{

    int *b = (int * ) malloc(sizeof(int) * boyut*boyut);

    for(int i = 0; i<boyut*boyut; i++)
    {

        b[i] = a[i/boyut][i%boyut];

    }

    int yb = filtre(fp,b,boyut*boyut);

    int yeniboyut = sqrt(yb);

    for(int i = 0; i<yeniboyut; i++)
    {

        for(int j = 0; j<yeniboyut; j++)
        {

            a[i][j]=b[i*yeniboyut+j];

        }

    }

    return yeniboyut;

}

int main()
{

    int x[4][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};

    int yeniboyut = boyutlandir( x,cift,4);

    for(int i = 0; i<yeniboyut; i++)
    {

        for(int j = 0; j<yeniboyut; j++)
        {

            printf(“%d “, x[i][j]);

        }

        printf(“n”);

    }

    getch();

}
