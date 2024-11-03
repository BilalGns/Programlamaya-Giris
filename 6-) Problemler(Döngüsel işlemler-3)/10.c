#include <stdio.h>

//? Girilen N değerine göre 1-N arasındaki tüm Mükemmel sayıları yazdırınız.

int main(){

    int n, sum = 0;

    printf("Enter a number : ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if(i == sum)
            printf("%d is a perfect number.\n", i);   
    }
    
    return 0;
}