#include <stdio.h>

//? Girilen n adet sayı içerisinden pozitif, negatif ve sıfır sayısının kaçar adet tekrarlandığını bulunuz.

int main(){
    
    int n, positiveCounter = 0, negativeCounter = 0, zeroCounter = 0, number;

    printf("How many numbers will be entered? : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a number : ");
        scanf("%d", &number);

        if( number > 0)
            positiveCounter++;
        else if(number == 0)
            zeroCounter++;
        else    
            negativeCounter++;       
    }
    
    printf("\n\nThere are %d positive numbers.\n", positiveCounter);
    printf("There are %d negative numbers.\n", negativeCounter);
    printf("There are %d zero numbers.\n", zeroCounter);
 
    return 0;
}