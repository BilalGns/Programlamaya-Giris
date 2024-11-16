#include <stdio.h>

//-- Girilen bir metindeki boşluk sayısını bulunuz.

int main(){

    char sentence[100];
    int counter = 0, i = 0;

    printf("Enter a sentence : ");
    gets(sentence);

    while (sentence[i] != '\0'){
        i++;

        if (sentence[i] == 32){
            counter++;
        }     
    }
    
    printf("Number of spaces in a sentence : %d", counter);
 
    return 0;
}