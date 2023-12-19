#include <stdio.h>
#include <stdlib.h>

int main()
{


    /* Arithmetic Operator

    +, -, *, /, %, ++, --

    */

    int x = 20;
    int y = 15;
    int sonuc;

    sonuc = x + y;

    printf("%d \n", sonuc);

    printf("%d \n", ++x);

    printf("%d \n", x%y);

    /*
    Assigment Operator

    =, +=, -=, /=, %=

    */


    int a = 25;

    // a = a + 3;
    //a +=3;

    //a = a /5;
    //a  /=5;

    //a = a %6;
    a %=6;


    printf("%d \n", a);


    /*
    Comparison Operators (Karsilastirma Operatorleri)
    ==, !=, >, <, >=, <=

    kosullar dogru ise 1 yazar ekranda, yanlis ise 0 yazar.

    */

    int b = 23;
    int o = 22;

    printf("%d \n", b != o); // b o'ya esit degil mi diye soruyor


    /*
    Logical Operators (Mantiksal Operatorler)
    && operatoru "ve" anlamina gelir. iki kosuluda saglar ise true(1) doner.kosullardan bir tanesini saglamazsa false(0) doner.
    || operatoru "ya da" anlamina gelir. iki kosuldan bir tanesini saglasa bile true(1) doner. ikisini saglamazsa false(0) doner.
    ! operatoru "deðili" anlamina gelir. Ornek olarak true degili false'dir. yani 1 => 0 olur.
    */

    printf("%d \n", !(b>24 && o<23));

    return 0;

}
