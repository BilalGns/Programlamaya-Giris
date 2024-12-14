#include <stdio.h>

//-> 1-N arası asal sayıları listeleyen programı önceki sorudaki Asal fonksiyonu kullanarak yazınız.

int isPrime(int number);

int main(){

    int n; 

    printf("Enter a number : ");
    scanf("%d" , &n);

    isPrime(n);

    return 0;
}


int isPrime(int n){

    if (n < 2){
        return 0;
    }

    int ctrl = 1;

    for (int i = 2; i < n; i++){
        ctrl = 1;
        for (int j = 2; j <= i/2; j++){
            if (i % j == 0){
                ctrl = 0;
            }   
        }

        if (ctrl)
        {
            printf("%d is a prime number.\n", i);
        }
        
    }
}