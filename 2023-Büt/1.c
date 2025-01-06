#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan başlangıç ve bitiş değerleri ile artış miktarı
// alınacaktır. Daha sonra başlangıç sayısı ile bitiş sayısı arasında kalan
// sayıları artış miktarı kadar atlayarak yazdırınız. Toplam kaç adet sayı
// olduğunu da ayrıca yazdırınız. Not: Girilen başlangıç değeri bitiş
// değerinden küçük olup olmadığı kontrol edilmeli, değilse başlangıç
// değeri küçük girilene kadar sürekli sayılar istenmeye devam edilecektir.

int main(){

    int baslangic,bitis,artis;
    int sayac = 0;

    do
    {
        printf("Baslangic degeri girin : ");
        scanf("%d" , &baslangic);

        printf("Bitis degeri girin : ");
        scanf("%d" , &bitis);

        printf("Artis degeri girin : ");
        scanf("%d" , &artis);

        if (baslangic > bitis){
            printf("Mantik hatasi var tekrar deneyin.\n");    
        } 
        
    } while (baslangic >= bitis);

    for (int i = baslangic; i <= bitis;){
        printf("%d ", i);
        i+=artis;
        sayac++;
    }

    printf("\n[%d] adet sayi vardir.", sayac);
 
    return 0;
}