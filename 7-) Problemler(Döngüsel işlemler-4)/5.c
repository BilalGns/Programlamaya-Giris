#include <stdio.h>

//      1 
//      2 2 
//      3 3 3 
//      4 4 4 4
//      5 5 5 5 5
//      6 6 6 6 6 6

int main(){

    int x = 6;

    for (int i = 1; i <= x; i++){
        for (int j = 0; j < i; j++)
            printf("%d ",i);

        printf("\n");
    }
    
    return 0;
}