#include <stdio.h>

//-- Kullanıcıdan alınan bir kelimedeki harfleri Harf isimli diziye, 
//-- rakamları ise Rakam isimli diziye aktardıktan sonra bu dizileri sırayla ekrana yazdıran programın kodunu yazınız.

int main(){

    char word[20];
    int rakam[20] = {0};
    char harf[20];
    int j = 0, k = 0;

    printf("Enter a word : ");
    scanf("%s" , &word);

    for (int i = 0; word[i] != '\0'; i++){

        if (word[i] >= '0' && word[i] <= '9'){
            rakam[j] = word[i];
            j++;
        }

        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z')){
            harf[k] = word[i];
            k++;
        }   
    }
    
    printf("\n");
    for (int i = 0; i < j; i++)
        printf("rakam[%d] = %c\n" ,i , rakam[i]);

    printf("\n");
    for (int i = 0; i < k; i++)
        printf("harf[%d] = %c\n" ,i , harf[i]);
      
    return 0;
}