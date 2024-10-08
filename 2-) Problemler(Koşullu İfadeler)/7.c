#include <stdio.h>

//* Dört işlem: 1:Toplama, 2:Çıkarma,3:Çarpma 4:Bölme. Kullanıcıdan iki sayı alıp işlemi seçerek sonucu ekranda yazınız?(if-else, switch-case)

int main()
{

    float x, y;
    char operator;

    printf("Enter two number : \n");
    scanf("%f%f", &x, &y);

    printf("Enter a mathematical operation (+ , - , * , /): \n");
    scanf(" %c", &operator);   

    switch (operator)
    {
    case '+':
        printf("Result of addition : (%.2f + %.2f) = %.3f", x, y, x + y);
        break;

    case '-':
        printf("Result of subtraction : (%.2f - %.2f) = %.3f", x, y, x - y);
        break;

    case '*':
        printf("Result of multiplication : (%.2f * %.2f) = %.3f", x, y, x * y);
        break;

    case '/':
        printf("Result of division : (%.2f / %.2f) = %3.f", x, y, x / y);
        break;

    default:
        printf("!!! Wrong option !!!");
        break;
    }

    return 0;
}