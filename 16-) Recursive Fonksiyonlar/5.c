#include <stdio.h>

//-> Fibonacci serisinin n.elemanını özyinelemeli olarak bulunuz.
//  1 1 2 3 5 8 13 21 34 55 89 ...

int fibonacci(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Result : %d", fibonacci(n));
 
    return 0;
}

int fibonacci(int n){

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);    
}