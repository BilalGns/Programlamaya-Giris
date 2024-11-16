#include <stdio.h>

//-- int sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; 
//-- Verilen sayı dizisinde çift sayıları tek sayıya (kendisinden bir fazla olan sayıya) çeviren program kodunu yazınız. 
//-- (20=>21, 60=>61 şeklinde olacaktır.)

int main(){

    int sayilar[14]= {20,60,45,42,23,24,26,125,66,55,145,50,30,40};

    for (int i = 0; i < 14; i++){ 
        if (sayilar[i] % 2 == 0){
            sayilar[i]++;          
        }
    }


    for (int i = 0; i < 14; i++){
        printf("sayilar[%d] = %d\n",i ,sayilar[i]);
    }
    
    


    return 0;
}