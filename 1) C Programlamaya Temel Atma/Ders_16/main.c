#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Cok Boyutlu Sayi Diziler

    /*
    Cok boyutlu sayi dizileri, bir dizinin tek bir boyutu yerine iki veya daha fazla
    boyuta sahip olan �zel bir t�rd�r. Bu diziler matrisleri veya �ok boyutlu
    dizileri temsil etmek i�in kullan�l�r.

    �ok boyutlu diziler, verileri d�zenli bir yap�da depolamak ve i�lemek i�in
    kullan��l�d�r.

    Kodlar�n haf�zada tutulan k�sm� do�rusal olmas�na kar��n cok boyutlu diziler
    dogrusal degildir.
    O halde �ok boyutlu dizileri dogrusal hale getirmek i�in dizinin dizisi �eklinde
    yazmam�z gerekir.

    Ornegin : m[2][1] 3.s�tun 2.sat�rdaki eleman� belirtir.

    cok boyutlu diziyi tan�mlarken sonsuz uzunlukta bir matris gibi tan�mlayabiliriz.

    intmatrice [][P]={{1,2,3},{4,5,6},{7,8,9}};

    burada, ilk matrisin ka� eleman i�erdi�ini yaz�p yazmamak tamamen sana kalm��
    Fakat 2.matrisin eleman say�s�n� yazmak zorunday�z

    */

    int can[2][2]={{4,6},{2,3}};
    printf("%d \n", can[0][0]);

    printf("%d \n", can[1][0]);




    return 0;
}
