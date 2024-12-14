#include <stdio.h>

//-> Bir karakter dizisinin uzunluğunu bulup döndüren fonksiyonu yazınız.

int findTheLenght(char characters[]);

int main(){

    char word[50];

    printf("Enter a word : ");
    scanf("%s", &word);

    printf("Lenght : %d", findTheLenght(word));

    return 0;
}

int findTheLenght(char characters[]){
    int i;
    for (i = 0; characters[i] != '\0' ; i++){}

    return (i);
}