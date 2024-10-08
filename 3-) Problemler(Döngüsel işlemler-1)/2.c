#include <stdio.h>

//? Kullanıcıdan alınan ismi istendiği kadar ekrana yazdıran algoritma ?

int main (){

    char name[15];
    int quantity;

    printf("Enter a name : ");
    scanf("%s", &name);

    printf("Enter quantity value : ");
    scanf("%d", &quantity);

    for (int i = 1; i <= quantity; i++)
        printf("%d- %s\n", i, name);

    return 0;
}

// 1. Başla
// 2. Kullanıcıdan bir isim al.
// 3. Kullanıcıdan kaç kere yazdırmak istediğini sor.
// 4. İsmi belirtilen sayı kadar ekrana yazdır.
// 5. Bitir