#include <stdio.h>
#include <stdlib.h>

float fonk(int x[],int y){

    float sonuc1=0;
    float sonuc2=1;
    if(y==1){
        for(int i=0;i<3;i++){
            sonuc1=sonuc1+x[i];
        }
        return sonuc1;
    }
    else if(y==2){
        sonuc1=x[0];
        for(int i=1;i<3;i++){
            sonuc1=sonuc1-x[i];
        }
        return sonuc1;
    }
    else if(y==3){
        for(int i=0;i<3;i++){
            sonuc2=x[i]*sonuc2;
        }
        return sonuc2;
    }
     else if(y==4){
        sonuc2=x[0];
        for(int i=1;i<3;i++){
            sonuc2=sonuc2/x[i];
        }
        return sonuc2;
    }



}

void fonk2(int x[],int y[],int a){

    float sonuc[3];

    if(a==1){
    for(int i=0;i<3;i++){
        sonuc[i]=x[i]+y[i];
        }
    }
    else if(a==2){
        for(int i=0;i<3;i++){
        sonuc[i]=x[i]-y[i];
        }
    }
    else if(a==3){
        for(int i=0;i<3;i++){
            sonuc[i]=x[i]*y[i];
        }
    }
    else if(a==4){
        for(int i=0;i<3;i++){
            sonuc[i]=(float)x[i]/y[i];
        }
    }

    for(int w=0;w<3;w++){
        printf("%f ",sonuc[w]);
    }

}

int main()
{
    int dizi[]={1,2,3};
    int dizi2[]={3,4,5};
    int a,b;


    printf("dizi elemanlarina uygulayacaginiz islemi seciniz:");
    printf("\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme");
    scanf("%d",&a);

    printf("\n\nSonuc:%f",fonk(dizi,a));

    printf("\n\n\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme");
    scanf("%d",&b);
    fonk2(dizi,dizi2,b);
    printf("\n\n");


}
