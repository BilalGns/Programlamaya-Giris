#include <stdio.h>

//* Sayı tahmin oyunu: Programda tanımlanan bir sayıyı kullanıcıdan tahmin etmesini
//* isteyen ve tahmine göre sayının daha küçük veya büyük olduğunu yazıp tekrar tahmin
//* isteyen program.

int main(){

    int number = 79, guess;

    printf("Try to guess to number : ");
    scanf("%d", &guess);

    do{

    if ( guess > number) {
        printf("Enter a smaller number : ");
        scanf("%d", &guess);
    } else if (guess < number) {
        printf("Enter a bigger number : ");
        scanf("%d", &guess);
    } else {
        printf("You guessed the number correctly.");
    }
        
    } while (guess != number);
    
    return 0;
}