#include <stdio.h>

//-> Girilen N değerine göre 1-N arasındaki tüm sayıların faktöriyelini bulan programı yazınız(faktöriyel fonksiyonunu kullanarak)

void factorial(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}

void factorial(int n){
    
    int sum = 1;

    for (int i = 1; i <= n; i++){
        sum = 1;
        for (int j = 1; j <= i; j++){
            sum *= j;
        }
        printf("%d! = %d\n", i, sum);
    }
}
