#include <stdio.h>

//-> 1-N arası sayıları özyinelemeli olarak yazdıran fonksiyonu yazınız.

void printFunc(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printFunc(n);

    return 0;
}

void printFunc(int n){

    if (n > 2){
        printFunc(n-1);
        printf("%d ", n-1);
    } 
}