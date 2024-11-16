#include <stdio.h>

//? 0-10 arası sayıları bir diziye aktarıp diziyi yazdırınız.

int main(){

    int array[9];

    for (int i = 0; i < sizeof(array)/4; i++){
        array[i] = i+1;
    }

    for (int i = 0; i < sizeof(array)/4; i++){
        printf("array[%d] : %d\n", i, array[i]);
    }
    
    return 0;
}