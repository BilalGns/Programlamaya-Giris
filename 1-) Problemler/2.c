#include <stdio.h>

//* Girilen 2 sayının toplamını ve çarpımını bulan programı yazınız.

int main()
{

    int x, y, sum, multiplication;

    printf("Enter two numbers : \n");
    scanf("%d%d", &x, &y);

    sum = x + y;
    multiplication = x * y;

    printf("Sum : %d\t", sum);
    printf("Multiplication : %d", multiplication);

    return 0;
}