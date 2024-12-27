#include <stdio.h>
#include <stdlib.h>

//-- Girilen bir kelimedeki sesli ve sessiz harf sayılarını pointer kullanarak bulunuz.(türkçe karakter kullanılmayacaktır)

int main(){

    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char word[30];
    int vowelCounter = 0, silentCounter = 0;

    printf("Enter a word : ");
    scanf("%s" , &word);

    char *ptr = word;

    int i = 0;
    for (i = 0; *(ptr+i) != '\0'; i++){
        for (int j = 0; j < 10; j++){
            if (*(ptr+i) == vowels[j]){
                vowelCounter++;
                break;
            } 
        }
    }
    
    silentCounter = i - vowelCounter;

    printf("Vowel : %d\n", vowelCounter);
    printf("Silent : %d", silentCounter);
 
    return 0;
}