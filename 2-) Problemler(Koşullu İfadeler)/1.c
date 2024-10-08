#include <stdio.h>

//? Girilen sayının pozitif ya da negatif olduğunu ekrana yazınız.

int main() {

    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    if (x > 0)
        printf("The number you enter is 'positive'");

    else if (x < 0)
        printf("The number you enter is 'negative'");

    else
        printf("The number you enter is 'zero'");

    return 0;
}