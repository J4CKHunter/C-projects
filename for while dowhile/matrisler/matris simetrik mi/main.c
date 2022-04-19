#include <stdio.h>

int simetrik_mi_yontem_1(int matris[4][4])
{

    int i,j;
    for (i = 0 ; i < 4 ; i++)
    {
        for (j = 0 ; j < 4 ; j++)
        {
            if (matris[i][j] != matris[j][i])
            {
                return 0;
            }
        }
    }
    return 1;

}
int simetrik_mi_yontem_2(int matris[4][4])
{

    int i,j;
// kontrolu sadece ust ucgeni dolasarak yap
    for (i = 0 ; i < 4 ; i++)
    {
        for (j = i+1 ; j < 4 ; j++)
        {
            if (matris[i][j] != matris[j][i])
            {
                return

                    0; // simetrik degildir

            }
        }
    }
    return 1;

}
int main()
{

    int m1[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int m2[4][4] = { {1, 2, 3, 4}, {2, 6, 7, 8}, {3, 7, 11, 12}, {4, 8, 12, 16}};
    if (simetrik_mi_yontem_1(m1) == 1)
        printf("m1 simetriktir\n");
    else
        printf("m1 simetrik degildir\n");
    if (simetrik_mi_yontem_1(m2) == 1)
        printf("m2 simetriktir\n");
    else
        printf("m2 simetrik degildir\n");
    if (simetrik_mi_yontem_2(m1) == 1)
        printf("m1 simetriktir\n");
    else
        printf("m1 simetrik degildir\n");
    if (simetrik_mi_yontem_2(m2) == 1)
        printf("m2 simetriktir\n");
    else
        printf("m2 simetrik degildir\n");
}
