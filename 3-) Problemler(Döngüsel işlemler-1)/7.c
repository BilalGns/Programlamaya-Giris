#include <stdio.h>
#include <stdlib.h>

// Girilen N adet sayının ortalamasını bulan algoritma.

int main(){

    int n,x;
    float sum=0, average = 0;

    printf("How many numbers will you enter : ");
    scanf("%d", &n);

    printf("Enter numbers : \n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    
    average = sum / n;

    printf("Average : %.3f\n", average);

    return 0;
}


// 1. Kullanıcıdan kaç adet sayı girileceğini alıyoruz.
// 2. for döngüsü ile kullanıcıdan her sayıyı tek tek alıp toplamı (sum) hesaplıyoruz.
// 3. Tüm sayılar toplandıktan sonra ortalamayı hesaplıyoruz (average = sum / n).
// 4. Son olarak ortalamayı ekrana yazdırıyoruz.