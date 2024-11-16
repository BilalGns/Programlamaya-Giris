#include <stdio.h>

//? Verilen bir dizinin k.konumuna x değerini yerleştiriniz.(k ve x kullanıcıdan alınacaktır.)

int main(){

    int numbers[10] = {23,12,65,45,87,98,10,28,23,53};
    int index, value;

    printf("Enter a index number : ");
    scanf("%d" , &index);

    printf("Enter a number : ");
    scanf("%d" , &value);

    numbers[index] = value;
    
    

    for (int i = 0; i < 10; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    


}