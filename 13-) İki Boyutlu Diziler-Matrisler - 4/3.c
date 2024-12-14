#include <stdio.h>
#include <string.h>

int main() {
    char word[6]; // 5 karakter ve \0 için 1 ekstra alan
    int word_length;

    // Kullanıcıdan kelime alma
    printf("Enter a word (max 5 characters): ");
    gets(word);

    int a;
    for (a = 0; word[a] != '\0'; a++){}

    word_length = a;
    

    if (word_length > 5) {
        printf("You can enter a word up to 5 characters long.\n");
        return 1;
    }

    // Matris tanımlama
    char matrix[5][5] = {
        {'a', 'b', 'c', 'd', 'e'},
        {'f', 'g', 'h', 'i', 'j'},
        {'k', 'l', 'm', 'n', 'o'},
        {'p', 'q', 'r', 's', 't'},
        {'u', 'v', 'w', 'x', 'y'}
    };


    printf("Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    int found = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= 5 - word_length; j++) {
            int match = 1;
            for (int k = 0; k < word_length; k++) {
                if (matrix[i][j + k] != word[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                printf("The word '%s' is found horizontally at row %d, starting from column %d.\n", word, i + 1, j + 1);
                found = 1;
            }
        }
    }

    for (int i = 0; i <= 5 - word_length; i++) {
        for (int j = 0; j < 5; j++) {
            int match = 1;
            for (int k = 0; k < word_length; k++) {
                if (matrix[i + k][j] != word[k]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                printf("The word '%s' is found vertically at column %d, starting from row %d.\n", word, j + 1, i + 1);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("The word '%s' is not found in the matrix.\n", word);
    }

    return 0;
}