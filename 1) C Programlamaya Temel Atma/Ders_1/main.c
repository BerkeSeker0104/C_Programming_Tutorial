#include <stdio.h>
#include <stdlib.h>

int main()
/*C program dilinde "main" fonksiyonu, programin baþlangic noktasini belirleyen ve programýn geri kalanýný kontrol eden özel bir fonksiyondur.
Her C programýnda yalnýzca bir tane "main" fonksiyonu bulunur.
*/
{
    printf("Hello world!\n");// "\n" ifadesi, bir karakter dizisinde yeni bir satýra geçmek için kullanýlan bir kacis dizisidir.

    /*
        int (4 bytes yer kaplar) yazdirmak için "%d" kullanarak pirntf yapman gerekir, (tam sayılarda kullanilir)
        double (8 bytes yer kaplar) yazdirmak için "%lf" kullanarak printf yapman gerekir.(Kesirli sayilarda kullanilir, floatdan farki daha büyük sayilarda kullanilir)
        float (4 bytes yer kaplar) yazdirmak için "%f" kullanarak printf yapman gerekir.(kesirli sayilarda kullanilir)
        char (1 byte yer kaplar) "%c" (Tek karakter tutarken kullanilir)


    */

   /* int sayim =15;

    printf("%d\n", sayim);

    int sayim_2; //degeri sonra atayalým
    sayim_2=12;

    printf("%d\n", sayim2); */

    int sayim, sayim2;
    sayim=14;
    sayim2=16;

    printf("%d %d\n", sayim, sayim2);


    float kesirli_sayim = 5.65;

    printf("%.2f\n", kesirli_sayim); // "%.3f" ".3" ekleme sebebim virgülden sonra kaç basamak gözükmesini istiyorsan seçiyorsun.


    double kesirli_sayim_2 = 6.66;

    printf ("Sayim : %.2lf\n", kesirli_sayim_2); //Tırnağın için metin yazabiliyorum


    char c = 'A'; // en önemli nokta bir karakter tutabiliyoruz.

    printf("Karakterim : %c\n", c);


    return 0; // Bu ifade, bir fonksiyonun sonucunu belirtmek için kullanilan bir ifadedir. Programin basariyla tamamlandigimizi belirtir.

}
