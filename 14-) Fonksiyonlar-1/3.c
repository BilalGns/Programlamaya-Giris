#include <stdio.h>

//-> Yarıçap değerini parametre olarak alıp dairenin alanını ve çevresini hesaplayan 
//-> AlanHesapla ve CevreHesapla fonksiyonlarını tek programda yazıp çağırınız.

void CevreHesapla(float radius);
void AlanHesapla(float radius);

int main(){
    
    float radius; 

    printf("Enter a radius : ");
    scanf("%f" , &radius);

    AlanHesapla(radius);
    CevreHesapla(radius);

    return 0;
}

void AlanHesapla(float radius){
    float PI = 3.14;
    float alan = PI * radius * radius;

    printf("Alan : %f\n", alan);
}

void CevreHesapla(float radius){
    float PI = 3.14;
    float cevre = PI * radius * 2;

    printf("Cevre : %f", cevre);

}