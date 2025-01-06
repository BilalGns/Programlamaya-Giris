#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan bir kelime ve kelimede aranacak karakter alındıktan
// sonra konumBul fonksiyonuna gönderilecektir. Bu fonksiyon kelimenin
// sonundan aramaya başlayarak aranan karakterin sondan kaçıncı sırada
// olduğunu döndürüp main’de ekrana yazdıracaktır. (Karakter yoksa
// “bulunamadı” yazmalıdır). Not: Programda dizi ve dizi sembolü(köşeli
// parantez []) kullanılmayacak olup pointer ile yapılacaktır.

int konumBul(char *kelime, char karakter);

int main(){

    char *kelime = (char *)malloc(sizeof(char)*30);
    char karakter;

    printf("Bir kelime girin : ");
    scanf("%s" , kelime);

    printf("Bir karakter girin : ");
    scanf(" %c" , &karakter);

    int konum = konumBul(kelime, karakter);

    if (!konum){
        printf("Bulunamadi.");
    } else {
        printf("'%c' karakteri sondan %d. konumda",karakter ,konum);
    }

    return 0;
}

int konumBul(char *kelime, char karakter){
    int length = 0;

    for (int i = 0; *(kelime+i) != '\0'; i++){ length++; }

    kelime += length-1;

    for (int i = 0; i < length; i++){
        if (*(kelime-i) == karakter){
            return (i+1);
        }
    }

    free(kelime);

    return 0;    
}