#include <stdio.h>

//? Girilen sayının Jumbled (komşu rakamlar arasındaki fark maksimum 1) olup olmadığını bulunuz.(jumbled sayılar:12, 45, 656, 3432,... )

int main(){

    int number, bas1, bas2;

    printf("Enter a number : ");
    scanf("%d", &number);

    int originalNumber = number;
    int control = 1;

    while (number > 9)
    {
        bas1 = number % 10;
        number /=10;
        bas2 = number % 10;

        if (bas1 - bas2 > 1 || bas2 - bas1 > 1){
            control = 0;
            break;
        }
    }
        
    if (control)
        printf("%d is a Jumbled number.", number);
    else 
        printf("%d is not a Jumbled number.", number);

    return 0;
}