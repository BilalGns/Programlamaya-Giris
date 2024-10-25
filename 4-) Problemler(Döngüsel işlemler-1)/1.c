#include <stdio.h>

//* İsminizi 5 defa yazdıran programın algoritması?

int main() {

    char name[] = "Bilal";

    for (int i = 1; i <= 5; i++) 
        printf("%d- %s\n", i, name);
    
    return 0;
}

// 1. Başla.
// 2. Bir isim tanımla.
// 3. Bir sayaç (counter) başlat ve sıfırla (örneğin i = 1).
// 4. Sayaç 5'ten küçük veya eşit olduğu sürece aşağıdaki adımları tekrarla:
//     4.1 İsmi ekrana yazdır.
//     4.2 Sayaç değerini bir artır (i = i + 1).
// 5. Döngü bitince programı sonlandır.
// 6. Bitir.