#include <stdio.h>

//* Yarıçapı verilen dairenin alanını hesaplayan algoritmayı yazınız. (pi = 3.14)

int main()
{

    float r;
    float area, pi = 3.14;

    printf("Enter the radius of the circle : ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area : %.3f", area);

    return 0;
}