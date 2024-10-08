#include <stdio.h>

// Girilen sayının 6'nın katı olup olmadığını bulan algoritma?

int main() {

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);
    

    if(number % 6 == 0)
        printf("The number entered is a multiple of six.");
    else
        printf("The number entered isn't a multiple of six.");

    return 0;
}