#include <stdio.h>

//-> Verilen bir metinde istenen harften kaç adet olduğunu döndüren fonksiyon.

int characterCounter(char sentence[], char character);

int main(){

    char sentence[100];
    char character;

    printf("Enter a sentence : ");
    gets(sentence);

    printf("Enter a letter : ");
    scanf("%c", &character);

    printf("There are %d letters of the letter %c", characterCounter(sentence, character), character);


    return 0;
}

int characterCounter(char sentence[], char character){

    int counter = 0;
    for (int i = 0; sentence[i] != '\0'; i++){
        if (sentence[i] == character){
            counter++;
        }
    }
    
    return counter;
}