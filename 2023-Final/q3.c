#include <stdio.h>
#include <stdlib.h>

int main(){

    float sinif[10][4] = {{20, 45, 65, 0}, {21, 50, 70, 0}, {22, 55, 75, 0}, {23, 60, 80, 0}, {24, 48, 68, 0},
                          {25, 42, 58, 0}, {26, 53, 73, 0}, {27, 49, 67, 0}, {28, 61, 82, 0}, {29, 40, 60, 0}};
    float maxOrtalama = 0, ogrenciNo = 0;
    float sinifOrtalamasi = 0;

    for (int i = 0; i < 10; i++){
        sinif[i][3] = (sinif[i][2] * 6 / 10) + (sinif[i][1] * 6 / 10);

        if (sinif[i][3] > maxOrtalama){
            maxOrtalama = sinif[i][3];
            ogrenciNo = sinif[i][0];
        }

        sinifOrtalamasi += sinif[i][3];
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f   ", sinif[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%.f numarali ogrenci en yuksek ortalamaya sahip. Ortalama : %.2f", ogrenciNo, maxOrtalama);
    printf("\nSinif ortalamasi %.f",( sinifOrtalamasi/10.0));
 
    return 0;
}