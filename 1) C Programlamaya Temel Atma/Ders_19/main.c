#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    // Egzersiz 1
    /*
    Asagadakileri iceren bir c programi yazin :

    * iki adet karakter dizisi olusturun: birincisin "bonne",
    ikincisin "soiree"

    * strcpy ve strncpy kullanarak iki karakter dizisini birlestirin

    * bonsoire ekrana bastir

    */

    char dizi_1[] = "bonne";
    char dizi_2[] = "soiree";
    char sonuc[100] = "";

    strcpy(sonuc, dizi_1);
    strncpy(sonuc+3, dizi_2, 5);

    printf("%s \n", sonuc);






    // Egzersiz 2

    /*
    Asagadikileri iceren bir c programi yazin :

    * iki boyutlu bir dizi olusturun
        dizinin elemanlarý : bir, iki, uc, dort ve bes olsun

    * dizinin 4.elemaninin 3 karakterini ekrana bastirin

    */

    char bes_kardes[100][100] = {"bir","iki","uc","dort","bes"};

     printf("dizinin 4.elemaninin 3 karakterini ekrana bastiralim : %c \n", bes_kardes[3][2]);

    return 0;
}
