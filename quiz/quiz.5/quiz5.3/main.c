#include<stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[3][50], temp[50];

    printf("Enter 10 words:\n");

    for(i=0; i<3; ++i)
        scanf("%s[^\n]",str[i]);


    for(i=0; i<2; ++i)
        for(j=i+1; j<3 ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=0; i<3; ++i)
    {
        puts(str[i]);
    }

    return 0;
}
