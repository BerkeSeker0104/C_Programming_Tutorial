#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* WHILE DONGUSU

        "While" dongusu, belirli bir kosul dogru oldugu surece belirli bir blogu tekrar tekrar calýstýrmak ýcýn kullanýlýr.
        Dongu, baslangýcta belýrtýlen kosulun dogru olup olmadýgýný kontrol eder. Eger kosul dogruysa,
        dongu govdesi (blok) calýstýrýlýr ve ardýndan kosul tekrar kontrol edilir. Kosul hala dogru ise dongu tekrarlanir,
        aksi takdirde donguden cýkýlýr.

        "while" dongusunun genel yapisi su sekildedir :

        while (kosul){
            //dongu govdesi
            //bu blok,kosul dogru oldugu surece tekrar calistirilir.
        }


        "while" dongusu ile "for" dongusu, C programlama dilinde iki farkli dongu turudur ve temelde ayný gorevleri yerine getirebilirler.
        Ancak, kullanim ve yazim acisindan farklýlýklar vardir:

        "while" dongusu, donguye baslamadan once kosulun belirsiz oldugu durumlarda veya kosulun dongu blogu icinde degisebilecegi durumlarda
        tercih edilir.

        "for" dongusu, daha spesifik sayida tekrarlamalarin oldugu durumlarda, ozellikle diziler ve benzeri yapýlarla calýsýrken, belirli bir aralýkta
        veya adim sayisinda tekrarlamalar icin daha uygundur.

    */

    int i = 0;

    while (i<10){
        printf("%d \n", i);
        i++;
    }


    /* Assagidaki yorum satirindaki gibi bir program yazalým :

        Bir sayi giriniz : 100

        100
        200
        300
        400
        500
        600
        700
        800
        900
        1000

    */


    int sayi;
    printf("Lutfen bir sayi giriniz : \n");
    scanf("%d", &sayi);

    while(sayi<=1000){
        printf("%d \n", sayi);
        sayi = sayi + 100;
    }


    // 0'dan 10'a kadar olan tek ve cift sayilari while dongusunu kullanarak bastiriniz.

    int x = 0;

    while(x<=10){
        printf("%d \n", x+1);
        x += 2;
    }

    // 10'dan baslayip birer birer azaltarak 1'e kadar olan sayilari ekrana bastiriniz.

    int a = 10;

    while(a>=1){
        printf("%d \n", a);
        a = a - 1;
    }

    // Sonsuz Döngü

    while(1){ //kosul kismindaki 1 true temsil ettiði için sonsuz dongu olarak calisir.
        printf("dongu");
    }




    return 0;
}
