#include <stdio.h>
#include <string.h>

void main()
{
    int count = 0, c = 0, i, j = 0, k, l, space = 0;
    char str[100], p[50][100], str1[20], ptr1[50][100], cmp[50];

    printf("Enter the string\n");
    scanf(" %[^\n]s", str);
    for (i = 0;i < strlen(str);i++)
    {
        if ((str[i] == ' ')||(str[i] == ', ')||(str[i] == '.'))
        {
            space++;
        }
    }
    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' ')||(str[j] == 44)||(str[j] == 46))
        {
            p[i][k] = '\0';
            i++;
            k = 0;
        }
        else
             p[i][k++] = str[j];
    }
    for (i = 0;i < space;i++)    //loop for sorting
    {
        for (j = i + 1;j <= space;j++)
        {
            if ((strcmp(p[i], p[j]) > 0))
            {
                strcpy(cmp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], cmp);
            }
        }
    }
    printf("After sorting string is \n");
    for (i = 0;i <= space;i++)
    {
        printf("%s ", p[i]);
    }
}
