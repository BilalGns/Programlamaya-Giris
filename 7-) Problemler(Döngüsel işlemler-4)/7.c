#include <stdio.h>

//      1 
//      0 1 
//      1 0 1 
//      0 1 0 1 
//      1 0 1 0 1 
//      0 1 0 1 0 1

int main(){
    int x = 6;
    int ctrl = 1;

    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
            ctrl = 1;
        else
            ctrl = 0;

        for (int j = 0; j < i + 1; j++){
            if (ctrl){
                printf("%d ", ctrl);
                ctrl = 0;
            } else {
                printf("%d ", ctrl);
                ctrl = 1;
            }
        }
        printf("\n");
    }

    return 0;
}