#include <stdio.h>

//? Girilen sayıyı tersten yazdıran(tamsayı olarak) program(245 => 542)
// 2 farklı çözüm 

int main() {
    int number, reverse = 0;
    
    printf("Enter a number : ");
    scanf("%d", &number);
    
    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit; 
        number /= 10; 
    }
    
    printf("Reverse number : %d\n", reverse);
    
    return 0;
}

// int main(){

//     int number, digit, i = 0; 
//     int array[10];

//     printf("Enter a number : ");
//     scanf("%d", &number);

//     do{
//         digit = number % 10;
//         printf("digit : %d\n", digit);
//         array[i] = digit;
//         number /= 10;
//         i ++;

//     } while(number > 0);

//     for (int a = 0; a <= i-1; a++)
//         printf("%d", array[a]);
        
//     return 0;
// }
