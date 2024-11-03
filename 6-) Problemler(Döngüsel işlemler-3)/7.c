#include <stdio.h>
#include <stdlib.h>

//? Girilen N değerine göre 1-N arasındaki tüm sayıların faktöriyelini bulan programı yazınız.(Ekran çıktısı: 1!=1, 2!=2, 3!=6…)

int main(){

    int n, factorial = 1;

    printf("Enter a number : ");
    scanf("%d" , &n);

    if (n < 1){
        printf("!!! Enter a pozitive number.");
        exit(1);
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        printf("%d!=%d\n", i,factorial);
        factorial = 1;
    }
    
    return 0;
}