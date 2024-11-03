#include <stdio.h>

//? Girilen N değerine göre 1-N arasındaki tüm Asal sayıları yazdırınız.

int main(){

    int n, control = 1;

    printf("Enter a number :");
    scanf("%d" , &n);

    if (n < 0)
    {
        printf("You must be entered a pozitive number. ");
        return 0;
    }  

    for (int i = 2; i <= n; i++){
        control = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0)
            {
                control = 0;
                break;
            }
        }

        if (control)
            printf("%d is a prime number. \n", i);   
    }

    return 0;
}