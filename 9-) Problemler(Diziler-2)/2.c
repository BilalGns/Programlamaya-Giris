#include <stdio.h>

//-- Girilen N elemanlı bir tamsayı dizisinde istenen bir sayıyı arayıp konumunu yazdırınız.

int main(){

    int n;

    printf("Enter a number N : ");
    scanf("%d" , &n);

    int numbers[n];

    for (int i = 0; i < n; i++){

        printf("Enter the number : ");
        scanf("%d" , &numbers[i]);

    }

    int search;
    
    printf("Enter the number you want to call : ");
    scanf("%d" , &search);

    for (int i = 0; i < n; i++){
        if (numbers[i] == search){
            printf("The index number of the number you are looking for is %d", i);
        }
        
    }
    

    return 0;
}