#include <stdio.h>

//-- Girilen bir cümledeki kelime sayısını bulunuz.

int main(){

    char sentence[200];
    int  i = 0;

    printf("Enter a sentence : ");
    gets(sentence);

    while (sentence[i] != '\0'){
        i++;
    }
    
    printf("Number of words : %d", i);


    return 0; 
}