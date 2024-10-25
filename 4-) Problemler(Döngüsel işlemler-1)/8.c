#include <stdio.h>

//? Dört işlem: Kullanıcıdan 2 sayı alarak işlem seçtiren ve kullanıcı çıkış
//? yapana kadar bu işlemi devam ettiren algoritma(1.Toplama,2.Çıkarma, 3.
//? Çarpma, 4.Bölme, 0.Çıkış)

int main() {

    int choice;
    float number1, number2, result;

    do {

        printf("1. Toplama\n");
        printf("2. Çıkarma\n");
        printf("3. Çarpma\n");
        printf("4. Bölme\n");
        printf("0. Çıkış\n");

        printf("Enter a choise : ");
        scanf("%d", &choice);


        if (choice != 0){

            printf("\nEnter a first number : ");
            scanf("%f", &number1);

            printf("Enter a second number : ");
            scanf(" %f", &number2);
        }

        switch (choice) {

        case 1:
            printf("\nResult:   %.2f + %.2f = %.2f\n\n", number1, number2, number1 + number2);
            break;

        case 2:
            printf("\nResult:   %.2f - %.2f = %.2f\n\n", number1, number2, number1 - number2);
            break;

        case 3:
            printf("\nResult:   %.2f * %.2f = %.2f\n\n", number1, number2, number1 * number2);
            break;

        case 4:
            printf("\nResult:   %.2f / %.2f = %.2f\n\n", number1, number2, number1 / number2);
            break;

        case 0:
            printf("Exit is in progress...");
            break;
        
        default:
            printf("\nInvalid value.");
            continue;

        }

    } while (choice != 0);

    return 0;
}