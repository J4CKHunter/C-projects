#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}koordinat;

float uzaklik(koordinat n1,koordinat n2){

   return sqrt(pow(n1.x-n2.x,2)+pow(n1.y-n2.y,2));

}
int main()
{
    koordinat k1={12,6};
    koordinat k2={-11,342};

    printf("iki nokta arasindaki uzaklik:%.2f",uzaklik(k1,k2));


}
