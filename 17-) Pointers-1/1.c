#include <stdio.h>
#include <stdlib.h>

//-> Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.(malloc ile)


int main(){

    int *ptr1 = (int *)malloc(sizeof(int));
    int *ptr2 = (int *)malloc(sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL){
        printf("Memory allocation error");
    }

    printf("Enter a number : ");
    scanf("%d", ptr1);

    printf("Enter a number : ");
    scanf("%d", ptr2);

    printf("Sum : %d", (*ptr1) + (*ptr2));

    free(ptr1);
    free(ptr2);
    
    return 0;
}