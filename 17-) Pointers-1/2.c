#include <stdio.h>
#include <stdlib.h>

//-> Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.(Sayı alma ve sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)

void replace(int *A, int *B);

int main(){

    int numberA; 
    int numberB; 
    
    printf("Enter A number : ");
    scanf("%d", &numberA);

    printf("Enter B number : ");
    scanf("%d" , &numberB);

    printf("A : %d - B : %d\n", numberA, numberB);

    replace(&numberA, &numberB);

    printf("A : %d - B : %d", numberA, numberB);
 
    return 0;
}

void replace(int *A, int *B){

    int temp = *A;
    *A = *B;
    *B = temp;
}