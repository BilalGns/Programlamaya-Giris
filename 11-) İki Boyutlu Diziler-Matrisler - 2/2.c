#include <stdio.h>
#include <stdlib.h>

//-- Girilen bir cümledeki her bir kelimeyi matrisin bir satırına aktaran programı yazınız. 

int main(){

    char sentence[100];
    char words[5][10];
    int j = 0, row = 0;

    printf("Enter a senntence : ");
    gets(sentence);

    for (int i = 0; sentence[i] != '\0'; i++){

        if (sentence[i] != ' '){
            words[row][j] = sentence[i];
            j++;
        } else if (j > 0){
            words[row][j] = '\0';
            j = 0;
            row++;
        } 
    }

    //-> Son kelimeye \0 karakteri ekliyoruz.
    if (j > 0) { 
        words[row][j] = '\0';
        row++;
    }

    for (int i = 0; i < row; i++) {
        printf("%s\n", words[i]);
    }
    
    return 0;
}