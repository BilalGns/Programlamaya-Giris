#include <stdio.h>

//? Verilen 2 sayı arasında kalan sayıları yazdırınız

int main(){

    int number1, number2, i;

    printf("Enter two number : \n");
    scanf("%d%d", &number1,&number2);

    if (number1 > number2){
        int tmp = number2;
        number2 = number1;
        number1 = tmp;
    }

    printf("-------------\n");
    
    for(int i = number1+1; i<number2; i++){
        printf("%d\n", i);
    }
    
    return 0;
}