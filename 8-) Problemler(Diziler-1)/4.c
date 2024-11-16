#include <stdio.h>

//?  Kullanıcıdan alınan N adet sayıyı diziye aktardıktan sonra dizideki en büyük ve en küçük elemanı bulunuz.

int main(){

    int n, minNumber = 0, maxNumber = 0;

    printf("Enter a number : ");
    scanf("%d" , &n);

    int numbers[n];

    printf("\n");
    
    for (int i = 0; i < n; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d" , &numbers[i]);
        
        if(numbers[i] > maxNumber)
            maxNumber = numbers[i];
        if(numbers[i] < minNumber)
            minNumber = numbers[i];
        
    } printf("\n\n");

    for (int i = 0; i < n; i++){
        printf("numbers[%d] : %d\n", i,numbers[i]);
    }
    
    printf("\n\nMax number : %d\n", maxNumber);
    printf("Min number : %d", minNumber);
    
    return 0;
}