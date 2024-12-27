#include <stdio.h>
#include <stdlib.h>

//-> Girilen bir kelimenin uzunluğunu pointer kullanarak bulan fonksiyonu yazınız.

int main(){

    char *word = (char *)malloc(sizeof(char)* 20);
    int i = 0;

    printf("Enter a word : ");
    scanf("%s" , word);

    for (i = 0; *(word + i) != '\0'; i++){}

    printf("Word length : %d", i);

    return 0;
}