#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Cok Boyutlu Sayi Diziler

    /*
    Cok boyutlu sayi dizileri, bir dizinin tek bir boyutu yerine iki veya daha fazla
    boyuta sahip olan özel bir türdür. Bu diziler matrisleri veya çok boyutlu
    dizileri temsil etmek için kullanýlýr.

    Çok boyutlu diziler, verileri düzenli bir yapýda depolamak ve iþlemek için
    kullanýþlýdýr.

    Kodlarýn hafýzada tutulan kýsmý doðrusal olmasýna karþýn cok boyutlu diziler
    dogrusal degildir.
    O halde çok boyutlu dizileri dogrusal hale getirmek için dizinin dizisi þeklinde
    yazmamýz gerekir.

    Ornegin : m[2][1] 3.sütun 2.satýrdaki elemaný belirtir.

    cok boyutlu diziyi tanýmlarken sonsuz uzunlukta bir matris gibi tanýmlayabiliriz.

    intmatrice [][P]={{1,2,3},{4,5,6},{7,8,9}};

    burada, ilk matrisin kaç eleman içerdiðini yazýp yazmamak tamamen sana kalmýþ
    Fakat 2.matrisin eleman sayýsýný yazmak zorundayýz

    */

    int can[2][2]={{4,6},{2,3}};
    printf("%d \n", can[0][0]);

    printf("%d \n", can[1][0]);




    return 0;
}
