#include <stdio.h>
#include <stdlib.h>

float usAlma(int taban, int us){
    float sonuc = 1;

    for (int i = 0; i < us; i++){
        sonuc *= taban;
    }
    return sonuc;
}

float factorial(int sayi){
    float sonuc = 1;

    for (int i = 2; i <= sayi; i++){
        sonuc *= i;
    }
    
    return sonuc;
}

int main(){

    float x,k;

    printf("Bir x girin : ");
    scanf("%f", &x);

    printf("Bir k girin : ");
    scanf("%f", &k);

    float sonuc = 0;

    for (int i = 1; i <= k; i++){
        sonuc += usAlma(x,i) / factorial(i); 
    }

    printf("Sonuc : %f", sonuc);
    
    return 0;
}