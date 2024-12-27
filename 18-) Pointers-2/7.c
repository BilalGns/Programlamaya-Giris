#include <stdio.h>
#include <stdlib.h>

//-> Pointer kullanarak A-Z arası harfleri belleğe yerleştirdikten sonra ekrana yazdırınız.

int main(){

    char alphabet[26];

    for (int i = 0; i < 26; i++){
        *(alphabet + i) = 'A' + i;
        // *(alphabet + i) = 65 + i;
    }
    
    for (int i = 0; i < 26; i++){
        printf("%c ", *(alphabet+i));
    }
 
    return 0;
}