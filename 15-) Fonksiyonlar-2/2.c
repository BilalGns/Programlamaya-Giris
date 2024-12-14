#include <stdio.h>

//-- Bir diziyi başka bir diziye tersten kopyaladıktan sonra dizileri sırayla diziYazdir fonksiyonu ile yazdırınız.

void diziYazdir(int array[]);

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9};
    int copy_array[9];

    for (int i = 0; i < 9; i++){
        copy_array[9-i-1] = array[i];
    }
    
    diziYazdir(copy_array);

    return 0;
}

void diziYazdir(int array[]){

    for (int i = 0; i < 9; i++){
        printf("%d ", array[i]);
    }   
}