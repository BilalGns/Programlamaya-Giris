#include <stdio.h>

//* Haftanın Günleri: 1-7 arası girilen değere göre günleri yazdırınız.(if-else, switch-case)

int main()
{

    int x;

    printf("Enter a number between 1-7 : ");
    scanf("%d", &x);

    if (x >= 1 && x <= 7)
    {
        switch (x) {

        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;
        
        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;
        }

    } else {

        printf("Wrong number");
    }

    return 0;
}