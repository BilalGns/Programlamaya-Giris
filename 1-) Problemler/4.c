#include <stdio.h>

// Kısa ve uzun kenarı girilen dikdörtgenin alanını ve çevresini hesaplayan programın algoritmasını oluşturunuz.

int main() {

    int shortSide, longSide, perimeter, area;

    printf("Enter a long side : ");
    scanf("%d", &longSide);

    printf("Enter a short side : ");
    scanf("%d", &shortSide);

    perimeter = 2 * (longSide + shortSide);
    area = longSide * shortSide;

    printf("Perimeter of rectangle : %d\n", perimeter);
    printf("Area of rectangle . %d", area);

    return 0;
}