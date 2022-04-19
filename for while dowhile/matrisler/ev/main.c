#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boy;
    scanf("%d",&boy);
    for(int i=1;i<=boy;i++){

      for(int b=1;b<=boy-i;b++)
        {
           printf(" ");
        }
      for(int j=1;j<=i;j++)
        {
           printf("xx");
        }

      printf("\n");
    }



for(int i=1;i<=boy;i++)
    {
      for(int b=1;b<=boy*2;b++)
        {
           printf("x");
        }
        printf("\n");

}

    return 0;
}


