#include <stdio.h>
#include <stdlib.h>

//? Girilen N değerine göre ilk N adet Asal sayıyı yazdırınız.(N=5 için => 2,3,5,7,11)

int main(){

    int n, control = 1, total=0;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 0){
        printf("You must be entered positive number.");
        exit(1);
    }  

    for (int i = 2;; i++)
    {
        control = 1;
        for(int j = 2; j < i; j++){
            if (i % j == 0)
            {
                control = 0;
                break;
            }     
        }

        if (total == n)
            return 0;
        
        if (control)
        {
            printf("Asal %d\n", i);
            total ++;
        }      
    }

    return 0;
}