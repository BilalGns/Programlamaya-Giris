#include <stdio.h>

//? 1-100 arası çift sayıları bir diziye aktarıp dizi elemanlarını yazdırınız.

int main(){

    int array[49];
    int i = 2;
    int index = 0;

    while (i < 100){
       
       array[index] = i;
       printf("array[%d] : %d\n", index, array[index]);
       i+=2;
       index++;
    }

    return 0;
}