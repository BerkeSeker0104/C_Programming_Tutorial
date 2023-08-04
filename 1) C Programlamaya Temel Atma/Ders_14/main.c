#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Diziler
    /*
    Diziler :

        Dizi: Ayný tipte olusan elemanlar tek bir isimle ifade edilmesidir.
            ornegin: int berke[10];

        Tum dizilerde bulunan ortak ozellikler :
            Eleman tipi, yukaridaki ornekte int
            Dizinin ismi, yukaridaki ornekte berke
            dizinin boyutu [], yukardaki ornekte 10

        2 tip dizi vardýr :
            cok boyutlu diziler
            tek boyutlu diziler

        Diziler hafizada n*s byte kadar yer tutar. (n eleman sayisi, s ise eleman tipinin kapladýgý alan)

        Dizinin ilk elemani 0'dan baslar. (yani 4.elemani dizide 3 ile gösterilir.)

    */

    int berke[5] = {1, 3, 5, 7, 24};

    printf("%d \n", berke[0]);

    // Diziye ilk 10 cift elemani entegre eden bir kod yazin.

    int ipek[10];
    int i;

    for(i=0; i<10; i++){
        ipek[i] = 2*i;
    }for(i=0; i<10; i++){
        printf("%d\n", ipek[i]);
    }


    // dizi elemanlarina yeni deger atamasi yapma

    int gorke[5] = {10, 12, 18, 24, 46};

    gorke[0] = 100;
    gorke[4] = 34;

    int x;

    for(x=0; x<5; x++){
        printf("%d ", gorke[x]);
    }

    return 0;
}
