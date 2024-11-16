#include <stdio.h>
#include <stdlib.h>

//-- Girilen bir karakter dizisinde istenen bir harften kaç adet tekrarlandığını bulunuz.

int main(){

    char sentence[50];
    char character;
    int counter = 0;

    printf("Enter a sentence : ");
    gets(sentence);

    printf("Enter a character : ");
    scanf("%c" , &character);

    int i = 0;
    while (sentence[i] != '\0'){

        if (sentence[i] == character){
            counter++;
        }
        i++;
    }

    if (counter > 0){
        printf("Number of letter : %d", counter);
    } else {
        printf("There is no number you entered.");
    }
    
    

    return 0;
}