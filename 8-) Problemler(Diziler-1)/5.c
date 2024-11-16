#include <stdio.h>

//? Bir tamsayı dizisini tersten yazdırınız.

int main(){

    int numbers[5] = {6,9,12,28,-6};

    for (int i = 4; i >= 0; i--)
        printf("numbers[%d] : %d\n", i, numbers[i]);
    
    return 0;
}