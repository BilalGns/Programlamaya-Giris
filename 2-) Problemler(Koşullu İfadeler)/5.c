#include <stdio.h>

//* Vize ve final notuna göre geçme durumunu hesaplayan algoritma(Not=Vize*0,4+Final*0,6) Geçme Notu:55

int main(){

    int vize, final;
    float ortalama;

    printf("Vize notunu girin : ");
    scanf("%d", &vize);

    printf("Final notunu girin : ");
    scanf("%d", &final);

    ortalama = (vize * 0.4) + (final * 0.6);

    if (ortalama >= 55)
        printf("Dersten gectiniz. Ortalamaniz : %.3f", ortalama);

    else
        printf("Dersten gecemediniz. Ortalamaniz : %.3f", ortalama);

    return 0;
}