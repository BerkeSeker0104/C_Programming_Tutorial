#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Boolean (bool) Data Type
    // "bool" ifadesi mantiksal degerleri temsil etmek icin kullanilir. iki degere sahiptir, bunlar true ve false.
    // "bool" calismasi icin kütüphane eklememiz lazim "#include <stdbool.h>"

    bool x = true;

    printf("%d \n", x);


    // "mat.h" kutuphanesi yardimci fonskiyonlar, ceil-floor-sqrt-pow-abs

    // "ceil" fonksiyonu yazilan sayinin bir ust tam sayiya yuvarlamamizi saglar.
    // "floor" fonksiyou yazilan sayinin tabana yuvarlnamasini saglar.
    // "sgrt" fonskiyonu sayinin karekökünü almamiza yardimci olur.
    // "pow" fonksiyonu sayinin ussunu almak istedigimizde kullanilir.
    // "abs" fonksiyonu sayinin mutlak deger alma islemidir.

    printf("%f\n", ceil(5.3));
    printf("%f\n", floor(5.9));
    printf("%f\n", sqrt(25));
    printf("%f\n", pow(2,3));
    printf("%d\n", abs(-15));


    // Casting(Donusum)
    // "casting" bir veri tipinin baska bir veri tipine donusturmek anlamina gelir.
    // "casting" iki farkli sekilde yapilabilir :
        /* Implicit casting(otomatik donusum):
            int a = 10;
            float b = a;  // Implicit casting: int to float

            Explicit casting(acýk donusum):
            float x = 3.14;
            int y = (int)x;  // Explicit casting: float to int
        */

    float sayi = (float) 9/4;
    printf("%.2f \n", sayi);


    // ASCI Kodlari
    // Karakterleri ifade etmek icin ASCI kodlarini kullaniriz. 0-255 arasinda bir deger alir.
    // Her karakterin bir ASCI kodu vardir.Hafizada bu koda göre bir yer tutar.

    int i;

    for(i='a';i<='z';i++){
        printf("%c", i);
    }
    return 0;
}
