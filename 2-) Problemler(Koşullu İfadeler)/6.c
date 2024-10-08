#include <stdio.h>

//* Personelin sabit maaşı ve çocuk sayısı girildiğinde yeni maaş miktarını hesaplayınız.(Çocuk sayısı 1 ise %5, iki ise %10,üç veya daha fazla ise %15 zam yapılacaktır.)

int main() {

    int children;
    float salary, raise;

    printf("Enter the salary amount : ");
    scanf("%f", &salary);

    printf("Enter the number of children : ");
    scanf("%d", &children);

    if(children == 1)
        raise = 5;

    else if (children == 2)
        raise = 10;

    else if (children > 2)
        raise = 15;

    salary = salary + (salary * raise)/100;


    printf("New salary amount : %.2f", salary);



    return 0;
}