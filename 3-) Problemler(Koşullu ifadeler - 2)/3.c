#include <stdio.h>

// Kullanıcıdan bir karakter girişi alan ve bu karakterin bir harf, rakam veya özel bir karakter olduğunu belirleyen bir program yazın. 
// (ASCII tablosunu kullanarak)

int main(){

    char karakter;

    printf("Enter a value : ");
    scanf("%c", &karakter);


    printf("%d\n", karakter); // asci
    printf("%c\n", karakter); // kendisi
    printf("%x\n", karakter); // hexadecimal


    return 0;
}
