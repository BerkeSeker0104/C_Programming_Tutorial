#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Kullanicidan bir sayi istemek icin "scanf" fonksiyonu ile yapilir.
    Bu fonskiyon, klavyeden girilen verileri programiniza aktarmanizi saglar.

    fonksiyonun genel formati sudur:
    scanf("format_dizisi", &degisken1, &degisken2, ...);

    Burada "format_dizisi" giriþ verisinin beklenen düzenini veri tipi belirler.

    Degiskenler ise verilerin atilacagi degiskenleri temsil eder. "&" iþareti, degisklerin bellek adresini alir.

    Ancak, scanf kullanirken dikkat etmemiz gereken bazi noktalar vardýr. Kullanicinin beklenen veriyi dogru bir sekilde girmesi onemlidir.

    Eðer kullanicinin beklenen veri türünden farkli bir giris yapmasi durumunda, "scanf" islemi basarisiz olur ve 0 veya negatif deger döndürür.
    */

   /*------------------
    int sayi;

    printf ("Lutfen bir sayi giriniz : \n ");
    scanf("%d", &sayi);

    printf("Aldiginiz sayi : %d \n", sayi);



    float sayi_2;
    printf("Lutfen bir sayi giriniz : \n ");
    scanf("%f", &sayi_2);

    printf("Aldiginiz sayi : %f \n", sayi_2);
   --------------- */


    /*
    Kullanicidan 2 adet sayi ve isminin bas harfini aliniz.
    Ilk sayim bu, ikinci sayim bu, ismimim nas harfi bu þeklinde ekrana bastiriniz.
    */

    int kullanici_sayi_1 ;
    double kullanici_sayi_2 ;
    char bas_harfi ;

    printf("Lutfen isminizin bas harfini giriniz: \n");
    scanf("%c", &bas_harfi);

    printf("Lutfen ilk sayiyi giriniz: \n");
    scanf("%d", &kullanici_sayi_1);

    printf("Lutfen ikinci kesirli sayiyi giriniz: \n");
    scanf("%lf", &kullanici_sayi_2);

    printf ("Ilk sayi bu: %d  Ikinci sayi: %lf  Bas harfi: %c", kullanici_sayi_1, kullanici_sayi_2, bas_harfi);




    return 0;
}
