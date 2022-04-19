#include<stdio.h>
#include<limits.h>
#include<float.h>
int main( void )
{
    float bsayi,isayi,sonuc;
    sonuc=(bsayi+isayi)/2;

	printf("Birinci sayiyi giriniz:");
	scanf("%f",&bsayi);
	printf("\n›kinci sayiyi giriniz.");
	scanf("%f",&isayi);
	printf("\nSonuc:%f",sonuc);
	return 0;
}
