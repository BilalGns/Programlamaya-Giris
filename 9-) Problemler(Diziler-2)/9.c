#include <stdio.h>

//-- int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; 
//-- Verilen sayı dizisinde yan yana olan çift sayı ikilisi bulan program (20-60, 24-26, 50-30, 30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır.)

int main(){

    int sayilar[14]= {20,60,45,42,23,24,26,125,66,55,145,50,30,40};

    for (int i = 0; i < 14; i++){
        if (sayilar[i] % 2 == 0){
            if (sayilar[i+1] % 2 == 0)
                printf("%d-%d | ", sayilar[i], sayilar[i+1]);       
        }   
    }

    return 0;
}