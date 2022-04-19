#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    for(a=1;a<=10;a++){

        if(a==8)
        {
            break;
        }

        printf("%d\n",a);
    }

    return 0;
}
