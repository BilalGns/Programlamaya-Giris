#include <stdio.h>

//? Bir tamsayı dizisini ters çeviriniz(başka bir dizi kullanmadan)

int main(){

    int numbers[5] = {28,91,16,-3,8}, tmp = 0, arrayLenght;

    arrayLenght = sizeof(numbers)/4;

    for (int i = 0; i < arrayLenght/2; i++){
        tmp = numbers[i];
        numbers[i] = numbers[arrayLenght-(i+1)];
        numbers[arrayLenght-(i+1)] = tmp;
    }
    
    for (int i = 0; i < arrayLenght; i++){
        printf("numbers[%d] : %d\n", i, numbers[i]);
    }
    
    return 0;
}