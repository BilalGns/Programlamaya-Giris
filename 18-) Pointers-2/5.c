#include <stdio.h>
#include <stdlib.h>

//-> Girilen bir kelimeyi pointer kullanarak tersten yazdırınız.

int main(){

    char word[30];
    char *ptr = word;

    printf("Enter a word : ");
    scanf("%s" , &word);

    int length = 0; 
    for (int i = 0; word[i] != '\0'; i++){
        length++;
    }

    ptr += length-1;

    for (int i = 0; i < length; i++){
        printf("%c ", *(ptr - i));
    }
    
    return 0;
}