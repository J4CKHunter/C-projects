#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;
    printf("Not giriniz:");
    scanf("%d",&not);

    if (not<=100 && not>=0)
{
            if (not>=65)
            {
            printf("\nTebrikler,gectiniz.");
            }

            else if (not<65)
            {
            printf("\nUzgunuz,gecemediniz.");
            }

}
    else
    {
       printf("\nLutfen belirtilen aralikta deger girisi yapiniz.");
    }

    return 0 ;
}
