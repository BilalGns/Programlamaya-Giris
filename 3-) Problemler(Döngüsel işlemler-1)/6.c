#include <stdio.h>

//? Girilen N değerine göre 0-N arası çift sayıların toplamını bulunuz.

int main(){

    int n,sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i = 2; i<n; i+=2){
        sum += i;
    }

    printf("Sum : %d", sum);

    return 0;
}