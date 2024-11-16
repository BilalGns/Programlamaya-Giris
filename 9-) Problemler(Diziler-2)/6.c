#include <stdio.h>

//-- Girilen bir cümledeki Büyük harf,Küçük harf,Rakam ve diğer sembolleri bulunuz.

int main(){

    char sentence[200];

    printf("Enter a sentence : ");
    gets(sentence);


    int i = 0;
    printf("Big letters : ");
    while (sentence[i] != '\0'){

        if (sentence[i] >= 'A' && sentence[i] <= 'Z'){
            printf("%c ", sentence[i]);
        }

        i++;
    }

    i = 0;
    printf("\nSmall letters : ");
    while (sentence[i] != '\0'){

        if (sentence[i] >= 'a' && sentence[i] <= 'z'){
            printf("%c ", sentence[i]);
        }

        i++;
    }

    i = 0;
    printf("\nNumbers : ");
    while (sentence[i] != '\0'){

        if (sentence[i] >= '0' && sentence[i] <= '9'){
            printf("%c ", sentence[i]);
        }

        i++;
    }
    

    i = 0;
    printf("\nSpecial chars : ");
    while (sentence[i] != '\0'){

        if (!((sentence[i] >= 'A') && (sentence[i] <= 'Z')) && !((sentence[i] >= 'a') && (sentence[i] <= 'z')) && !((sentence[i] >= '0') && (sentence[i] <= '9'))){
            printf("%c ", sentence[i]);
        }

        i++;
    }

    return 0;
}
