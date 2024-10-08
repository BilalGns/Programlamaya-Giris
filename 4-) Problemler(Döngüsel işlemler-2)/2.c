#include <stdio.h>

//? Klavyeden girilen a ve b sayılarına göre a^b hesaplayınız
// Açıklamada belirtilmediği için istsina durumları kontrol etmedim.

int main(){

    int a,b,result = 1;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter the number of exponents : ");
    scanf("%d", &b);


    for (int i = 1; i <= b; i++) 
        result *= a;
    
    
    printf("Result : %d", result);

    return 0;
}