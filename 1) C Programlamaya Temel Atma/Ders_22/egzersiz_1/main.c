#include <stdio.h>
#include <stdlib.h>

int ussunu_al(int x, int y)
{
    int sonuc=1;

    for(int i=0; i<y; i++){
        sonuc*=x;
    }

    return sonuc;
}

int main()
{
    /*
        "int ustunu_al(intx, inty)" fonksiyonunu yaziziniz.
        Fonksiyon x ve y degerlerini parametre olarak aliyor ve x uzeri y degerini hesaplayip sonucu donduruyor.
        x=4 ve y=5 oldugunda sonucu 1024 dondurmesi gerekiyor.
        sonucu 4 uzeri 5 = 1024 seklinde ekrana bastiriniz.

        bu kodu degiskenin degeriyle islem yaparak yazdik
    */


    int x, y, sonuc;
    x=4, y=5;

    sonuc = ussunu_al(x,y);

    printf("Sonuc = %d uzeri %d = %d \n", x,y,sonuc);

    return 0;
}
