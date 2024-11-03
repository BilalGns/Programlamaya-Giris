#include <stdio.h>

//? Girilen n değerine göre Fibonacci serisinin ( 0 1 1 2 3 5 8 … ) ilk n terimini hesaplayınız?

int main(){

    int n, a1=0, a2=1, tmp=1;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("%d ", a1);
        tmp = a1 + a2;
        a1 = a2;
        a2 = tmp;
    }

    return 0;
}