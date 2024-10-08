#include <stdio.h>

//? Girilen sayının mutlak değerini alan algoritma

int main() {

    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    if (x < 0)
        x = x * -1;

    printf("Result : %d", x);

    return 0;
}