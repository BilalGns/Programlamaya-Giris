#include <stdio.h>

//? Verilen 3 sayının ortalamasını bulunuz.

int main(){

    float x, y, z; 
    float average = 0;

    printf("Enter three numbers:\n");
    scanf("%f%f%f", &x, &y, &z);

    average = (x + y + z) / 3;

    printf("Average : %.3f", average);

    return 0;
}