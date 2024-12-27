#include <stdio.h>

//-> Girilen kelimedeki karakterleri özyinelemeli fonksiyon ile yazdırınız.

void printFunc(char word[], int index);

int main(){

    char word[20];

    printf("Enter a word : ");
    scanf("%s", word);

    printFunc(word, 0);
 
    return 0;
}

void printFunc(char word[], int index){

    if (word[index] != '\0'){
        printf("%c ", word[index]);
        printFunc(word, index+1);
    }
}