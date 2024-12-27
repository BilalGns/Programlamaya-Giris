#include <stdio.h>
#include <stdlib.h>

//! Girilen kelimenin palindrom olup olmadığını pointer kullanarak bulunuz.

int main(){

    char word[30];
    char *ptr = word;
    int length = 0;

    printf("Enter a word : ");
    scanf("%s" , &word);

    for (int i = 0; word[i] != '\0'; i++){
        length++;
    }
    
    for (int i = 0; i < length/2; i++){
        if (*(ptr+i) != *(ptr + length-i-1))
        {
            printf("The entered number IS NOT PALINDROME.");
            return 1;
        }
    }
    
    printf("The entered number IS PALINDROME");
 
    return 0;
}