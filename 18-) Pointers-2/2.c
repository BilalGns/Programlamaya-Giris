#include <stdio.h>
#include <stdlib.h>

//-- Girilen 5 adet sayıyı bir diziye aktardıktan sonra bu diziyi pointer kullanarak tersten yazdırınız.

int main(){

    int numbers[5];
    int *ptr = numbers + 4;

    for (int i = 0; i < 5; i++){
        printf("Enter %d. number : ", i+1);
        scanf("%d" , &numbers[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", *ptr);
        ptr--;
    }
 
    return 0;
}
