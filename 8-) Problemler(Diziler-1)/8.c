#include <stdio.h>

//-- Fibonacci serisini dizi kullanarak oluşturunuz.

int main(){

    int x;

    printf("Enter a number : ");
    scanf("%d" , &x);

    int fibonacci[x];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 1; i < x+1; i++)
        fibonacci[i+1] = fibonacci[i] + fibonacci[i-1];


    for (int i = 0; i < x; i++)
        printf("%d ", fibonacci[i]);

    return 0;
}