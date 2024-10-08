#include <stdio.h>

//? Klavyeden girilen 3 sayı içerisinden en küçük sayıyı bulan algoritma?
// Sayıların eşit olma durumu kontrol edilmemiştir.

int main() {

    int x, y, z, max, min;

    printf("Enter three number : \n");
    scanf("%d%d%d", &x, &y, &z);

    max = x;
    min = z;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    if (min > y)
        min = y;

    if (min > x)
        min = x;

    printf("Max : %d\n", max);
    printf("Min : %d", min);

    return 0;
}