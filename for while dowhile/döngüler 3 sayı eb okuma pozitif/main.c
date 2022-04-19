#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen,enbuyuk=0;

    for(int i=0;i<3;i++){
        scanf("%d",&girilen);
        if(girilen>enbuyuk)
            {
        enbuyuk=girilen;
        printf("%d",enbuyuk);
            }
        else if(girilen<=enbuyuk)
        {
        printf("%d",enbuyuk);
        }

    }

    return 0;
}
