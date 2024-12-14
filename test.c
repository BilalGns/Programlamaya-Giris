#include <stdio.h>
#include <string.h>

int main() {
    char kelime[6]; 
    char matris[5][5] = {
        {'a', 'b', 'c', 'd', 'e'},
        {'f', 'g', 'h', 'i', 'j'},
        {'k', 'l', 'm', 'n', 'o'},
        {'p', 'q', 'r', 's', 't'},
        {'u', 'v', 'w', 'x', 'y'}
    };

    int found = 0; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matris[i][j]);
        }
        printf("\n");
    }

    printf("En fazla 5 karakterlik bir kelime giriniz: ");
    scanf("%s", kelime);

    int kelimeLength = strlen(kelime);  

    if (kelimeLength > 5) {
        printf("Kelime 5 karakterden fazla olamaz.\n");
        return 0;
    }

    for (int i = 0; i < 5 && !found; i++) {
        for (int j = 0; j <= 5 - kelimeLength && !found; j++) {
            int match = 1; 
            for (int k = 0; k < kelimeLength; k++) {
                if (matris[i][j + k] != kelime[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                found = 1;
            }
        }
    }

    for (int i = 0; i < 5 && !found; i++) {
        for (int j = 0; j <= 5 - kelimeLength && !found; j++) {
            int match = 1;  
            for (int k = 0; k < kelimeLength; k++) {
                if (matris[j + k][i] != kelime[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                found = 1;
            }
        }
    }

    if (found) {
        printf("Kelime matris icinde bulundu.\n");
    } else {
        printf("Kelime matris icinde bulunamadı.\n");
    }

    return 0;
}