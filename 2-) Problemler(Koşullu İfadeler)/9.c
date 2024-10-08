#include <stdio.h>

/*
Klavyeden girilen 4 sayıdan hangi sayıların ortalamadan büyük/eşit/küçük olduğunu bulan
programı yazınız. Örnek: 10, 5, 3, 12 Ort: 7.5 => Ortalamadan büyük olanlar:10,12 Ortalamadan küçük olanlar:
3, 5 olarak yazacaktır  */

int main()
{

    float numbers[4];
    float sum = 0, average = 0;

    printf("Enter four number : \n");

    for (int i = 0; i < sizeof(numbers) / 4; i++) // float = 4 bytes
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 4;

    printf("Average : %.2f\n", average);

    printf("Numbers greater than average : ");

    for (int i = 0; i < sizeof(numbers) / 4; i++)
    {
        if ( numbers[i] > average)
        {
            printf("%.1f ", numbers[i]);
        }
        
    }

    printf("\nNumbers equal to the average : ");

    for (int i = 0; i < sizeof(numbers) / 4; i++)
    {
        if ( numbers[i] == average)
        {
            printf("%.1f ", numbers[i]);
        }
        
    }

    
    printf("\nNumbers smaller than average : ");

    for (int i = 0; i < sizeof(numbers) / 4; i++)
    {
        if ( numbers[i] < average)
        {
            printf("%.1f ", numbers[i]);
        }
    } 
    return 0;
}