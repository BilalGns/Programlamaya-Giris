#include <stdio.h>

//? Kullanıcıdan alınan boy(metre) ve kilo(kg) bilgisine göre kilo durumunu değerlendirip ekrana yazdırınız.
//? Vücut kitle endeksi formülü VKİ = kg/(boy*boy)

int main(){

    float height, weight; 
    float vki = 0;


    printf("Enter your height : ");
    scanf("%f", &height);

    printf("Enter your weight : ");
    scanf("%f" , &weight);


    vki = weight / (height*height);

    if (vki < 18.5){
        printf("Underweight : %f", vki);
    } else if (18.5 < vki && 24.9 > vki) {
        printf("Normal : %f", vki);
    } else if (25 < vki && 29.9 > vki) {
        printf("Slightly overweight %f: ", vki);
    } else if (30 < vki && 34.9 > vki) {
        printf("Overweight : %f", vki);
    } else {
        printf("Obese : %f", vki);
    }
    
    return 0;
}