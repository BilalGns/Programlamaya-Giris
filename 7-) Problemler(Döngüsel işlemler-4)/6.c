#include <stdio.h>

//      1
//      2 3
//      4 5 6
//      7 8 9 10

int main(){

    int counter = 1;

    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    
    return 0;
}