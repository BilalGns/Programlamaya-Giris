#include <stdio.h>

//-- Girilen 2 kelimenin uzunluklarının eşit olup olmadığını bir önceki sorudaki uzunluk bulma fonksiyonunu kullanarak yazdırınız.

int findTheLenght(char characters[]);

int main(){

    char word1[50];
    char word2[50];

    printf("Enter a first word : ");
    scanf("%s", &word1);

    printf("Enter a second word : ");
    scanf("%s", &word2); 

    if (findTheLenght(word1) == findTheLenght(word2))
        printf("Word lengths are equal");
    else 
        printf("Word lengths are not equal");
        
}

int findTheLenght(char characters[]){
    int i;
    for (i = 0; characters[i] != '\0' ; i++){}

    return (i);
}