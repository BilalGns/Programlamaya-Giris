#include <stdio.h>

// Girilen gün sayısını Yıl, Hafta ve Gün’e çevirerek yazınız.

int main() {

    int day,year = 0,week = 0;

    printf("Enter the number of days : ");
    scanf("%d", &day);

    year = day / 365;
    day = day % 365;

    week = day / 7;
    day = day % 7;

    printf("Number of years : %d\n", year);
    printf("Number of week : %d\n", week);
    printf("Number of day : %d\n", day);

    return 0;
}