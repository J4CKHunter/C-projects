#include <stdio.h>
#include <stdlib.h>

int main()
{
   int not;

    printf("Notu giriniz:");
    scanf("%d",&not);

    if (0<=not<=100)
    {
        if (not>=90)
            {printf("\nAA");}
        else if (not>=80)
            {printf("\nBA");}
        else if (not>=70)
            {printf("\nBB");}
        else if (not>=60)
            {printf("\nCB");}
        else if (not>=50)
            {printf("\nCC");}
        else if (not>=40)
            {printf("\nDC");}
        else if (not>=30)
            {printf("\nDD");}
        else
            {printf("\nF");}
    }
    else
    {
        printf("\nHatali not girisi");
    }


    if (not>=65)
    {
        printf("\nGecti");
    }


    else
    {printf("\nGecemedi.");
    }

}
