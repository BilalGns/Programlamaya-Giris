#include <stdio.h>
#include <stdlib.h>

//-- Kullanıcıdan N adet sayı aldıktan sonra bu sayıları toplam fonksiyonuna göndererek 
//-- toplamlarını bulunuz ve sonucu maine döndürüp yazdırınız.(Dizi kullanılmayacaktır).

int sum(int *numbers, int n);
 
int main(){

    int n;

    printf("How many numbers will you enter : ");
    scanf("%d" , &n);

    int *numbers = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++){
        printf("Enter a number : ");
        scanf("%d" , numbers+i);
    }
    
    printf("Sum : %d", sum(numbers, n));
    
    return 0;
}

int sum(int *numbers, int n){

    int result = 0;

    for (int i = 0; i < n; i++){
        result += *(numbers+i);
    }
    
    return result;
}