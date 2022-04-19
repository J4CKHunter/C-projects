#include <stdio.h>
#include <stdlib.h>

int main()
{

  int satirsayisi,sutunsayisi;

  printf("Matrisin satir sayisini giriniz:");
  scanf("%d",&satirsayisi);
  printf("\nMatrisin sutun sayisini giriniz:");
  scanf("%d",&sutunsayisi);


  printf("\nLutfen matris tanimina gore matrisin elemanlarini giriniz:");


  int matris[satirsayisi][sutunsayisi];

  for(int i=0;i<satirsayisi;i++){

        for(int j=0;j<sutunsayisi;j++){


            scanf("%d",&matris[i][j]);
        }
  }

    printf("\n\n");


  for(int i=0;i<satirsayisi;i++){

        for(int j=0;j<sutunsayisi;j++){

            printf("    %d",matris[i][j]);
        }

        printf("\n");
  }


  return 0;
}
