#include <stdio.h>

//-> Bir tam sayı dizisinde istenen sayıyı arayıp bulunduğu konumu döndüren fonksiyonu yazınız.

int findLocation(int numbers_array[], int number, int length);

int main(){

    int numbers[] = {5,23,56,12,76,34,21,65,34,69};

    for (int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }
    
    int number;

    printf("\nEnter the number you want to find the position : ");
    scanf("%d" , &number);

    if (findLocation(numbers, number, 10) >= 0){
        printf("index(%d) ", findLocation(numbers, number, 10));
    } else {
        printf("No words found.");
    }
    
    return 0;
}

int findLocation(int numbers_array[], int number, int length){

    for (int i = 0; i < length; i++){
        if (numbers_array[i] == number){
            return i;
        }
        
    }
    
    return -1;
}