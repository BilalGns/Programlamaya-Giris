#include <stdio.h>

//-- Girilen kelimenin palindrom olup olmadığını bulunuz.

int main(){

    char word[20];
    int lenght = 0, i = 0;
    int control = 0;

    printf("Enter a word : ");
    scanf("%s", &word);

    while (word[i] != '\0'){
        lenght++;
        i++;
    }
    
    for (int i = 0; i < lenght/2; i++){

        if (word[i] == word[lenght-1-i])
            control = 1;
        else
            break;
    }

    control ? printf("Entered number is Palindrome.") : printf("Entered number isn't Palindrome.");

    return 0;
}