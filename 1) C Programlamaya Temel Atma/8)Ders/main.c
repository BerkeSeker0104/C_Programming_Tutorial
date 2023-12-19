#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FOR DONGUSU
    // C programlama dilinde "for" dongusu, belirli bir kosul sagland�g� surece bir blogu tekrar tekrar calistirmak icin kullanilan bir dongu yapisidir.
    /*
    "for" dongusunun genel yap�s� su sekildedir:

    for(baslangic_degerini_atama;kosul;adim_degerini_guncelleme){

        // Dongu govdesi (tekrar eden islemler ya da islemler)

    }

    baslangic_degerini_atama : dongunun baslang�c degeri atani. Bu genellikle bir degiskenin degeridir ve dongunun ilk adiminda bir kez atanir.

    kosul : Dongu, bu kosul her dongu ad�m�nda dogru oldugu surece cal�smaya devam eder.

    adim_degerini_guncelleme :  Dongu adiminin sonunda bu bolum cal�s�r ve genellikle baslang�c degeri ile ilgili bir artis veya azalma yapar.
    */

    int i;

    for(i=0; i<=10; i++){
        printf("%d \n", i);
    }


    /*  Kullanicidan bir say� girmesini isteyiniz 1'den giriceginiz sayiya kadar olan sayilarin
    toplamini for dongusu ile hesaplayiniz.
    */

    int sayi;
    printf("Lutfen bir sayi giriniz : \n");
    scanf("%d", &sayi);

    int x, toplam=0;

    for(x=1; x<=sayi; x++){

        toplam = toplam + x;
    }

     printf("Toplam : %d \n", toplam);

     // 0'dan 10'a kadar olan cift sayilari ekrana bastiriniz

     int a;

     for(a=0; a<=10; a= a+2){
        printf("%d \n", a);
     }


    return 0;
}
