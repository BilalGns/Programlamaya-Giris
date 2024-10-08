#include <stdio.h>

//? A ve B tamsayı değişkenlerinin değerlerini yer değiştiren algoritma(A=3 B=5 girildikten sonra A=5 B=3 olarak yer değişmeli)

int main() {

    int A = 5;
    int B = 3;
    int x = 0;

    printf("--- First situation ---\n");
    printf("A = %d\n", A);
    printf("B = %d\n\n", B);

    x = A;
    A = B;
    B = x;

    printf("--- Last situation ---\n");
    printf("A = %d\n", A);
    printf("B = %d", B);

    return 0;
}
