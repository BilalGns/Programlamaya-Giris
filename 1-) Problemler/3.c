#include <stdio.h>

//* y= 3x^2 fonksiyonunda verilen x değerine göre y değerini bulunuz. ( Örnek: x=2 ise y=12 olmalıdır.)

int main()
{

    int x, y;

    printf("Enter x value : ");
    scanf("%d", &x);

    y = 3 * x * x;

    printf("y : %d", y);

    return 0;
}