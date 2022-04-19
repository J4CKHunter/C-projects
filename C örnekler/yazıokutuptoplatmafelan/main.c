#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,toplama,cikarma,carpma,bolme;

    printf("Lutfen iki sayi girisi yapiniz:");
    scanf("%f%f",&a,&b);

    /* önce scan yaparak a ve b ye degisken atýyoruz ki tanýmlansýnlar */
    // ardýndan da iþlemlerimizi tanýmlýyoruz

    toplama=a+b;
    cikarma=a-b;
    carpma=a*b;
    bolme=a/b;

    printf("\n%f+%f=%f",a,b,toplama);
    printf("\n%f-%f=%f",a,b,cikarma);
    printf("\n%f*%f=%f",a,b,carpma);
    printf("\n%f/%f=%f",a,b,bolme);

    int sayi;
    float ondalik;
    char harf;

    printf("\nbir harf,bir ondalıklı sayi,bir sayı girin:");
    scanf("%c%f%d",&harf,&ondalik,&sayi);
    printf("girdiginiz seyler bunlardır:%c, %f, %d",harf,ondalik,sayi);

    return 0;

}
