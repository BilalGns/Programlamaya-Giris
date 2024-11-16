#include <stdio.h>

//? Girilen 5 sayıyı bir diziye aktardıktan sonra ayrı bir döngüde dizi elemanlarını yazdırıp toplamlarını hesaplayınız.

int main(){

    int numbers[5], sum = 0;

    for (int i = 0; i < 5; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d" , &numbers[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("numbers[%d] : %d\n", i, numbers[i]);
        sum += numbers[i];
    }
    
    printf("\nSum : %d", sum);


    return 0;
}