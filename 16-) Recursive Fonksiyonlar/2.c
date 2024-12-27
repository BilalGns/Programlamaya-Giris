#include <stdio.h>

//-> N-1 arası sayıları tersten özyinelemeli olarak yazdıran fonksiyonu yazınız.

void printFunc(int n);

int main(){

    int N;

    printf("Enter a number : ");
    scanf("%d", &N);

    printFunc(N);   
 
    return 0;
}

void printFunc(int n){

    if (n > 2){
        printf("%d ", n-1);
        printFunc(n-1);
    }
    
}