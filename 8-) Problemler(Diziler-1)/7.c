#include <stdio.h>

//-- Bir dizinin elemanlarını başka bir diziye kopyalayıp yeni diziyi yazdırınız.

int main(){
    
    int array[] = {4,67,23,12,76}; 
    int newArray[sizeof(array)/4];

    for (int i = 0; i < sizeof(array)/4; i++){
        newArray[i] = array[i];
        printf("newArray[%d] : %d \n", i, newArray[i]);
    }

    return 0;
}