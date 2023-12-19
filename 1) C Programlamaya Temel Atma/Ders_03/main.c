#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    /*
    C programlama dilinde, "sizeof" operatoru, belirli bir veri tipinin ya da bir degiskenin bellekte ne kadar yer kapladigini bayt cinsinden dondurur.
    */

    int can = 20;

    printf("Can degiskeni hafizada %d byte kadar yer tutar. \n", sizeof(can));
    printf("Int hafizada %d byte kadar yer tutar. \n", sizeof(int));
    printf("Double hafizada %d byte kadar yer tutar.\n", sizeof(double));


    // Const ve Define Kullanimi

    /*
    const : C programlama dilinde "const" anahtar kelimesi, degiskenin sabit bir degerle baslatildigi ve bu degerin daha sonra degistirilemeyecegini ifade eder.

            Fakat const kullanmayi cok sevmiyoruz, onun yerine main fonksiyonun disinda "define" ifadesini kullaniyoruz.


    define : "#define" ifadesiyle tanimlanan bir makro, belirli bir sembolun belirli bir degeri veya kod parcasini temsil etmesini saglar.
    */


    const int sayim = 15;

    // �imdi a�a��da sayim degiskenin degerini degistirmeye cal�s�caz ve hata ald�g�m�z� gorecegiz.
    // sayim = 20;     "error: assignment of read-only variable 'sayim'|"

    printf("%d \n", sayim);



    printf("%.2f", PI);




    return 0;
}
