#include <stdio.h>

//-> 1-N arası sayıların toplamını özyinelemeli olarak bulunuz.

int sum(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d ", sum(n));
 
    return 0;
}

int sum(int n){

    if (n > 2){
        return n-1 + sum(n-1);
    }
    
    return 0;
}