#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    If Else yapisi

    if-else yapisi, bir kosulun dogru ve yanlis olmasina baglý olarak belirli
    bir kod blogunu calýstýrmak icin kullanýlýr.Bu yapi, programin belirli
    bir islemi gerceklestirmesini veya belirli bir karara varmasini saglar.


    if (koþul) {
    // Eðer koþul doðruysa buradaki kod bloðu çalýþtýrýlýr
}
else {
    // Eðer koþul yanlýþsa buradaki kod bloðu çalýþtýrýlýr
}

    * "kosul", degerlendirilmesi gereken bir ifadedir. Bu ifade dogru veya
    yanlis sonucunu verebilir.
    * Eger "kosul" dogruysa, yani degeri "true(1)" ise if blogu icindeki kod
    calýstýrýlýr.
    * Eger "kosul" yanlissa, yani degeri"false" ise else blogu icindeki kod
    calýstýrýlýr.


    */

    int x = 52;
    int y = 78;

    if(x>y){
        printf("x y'den buyuktur. \n");
    }else{
        printf("x y'den kucuk veya esittir. \n");
    }


    /*
    else if kullanimi asagidaki gibidir. istedigin kadar else if kullanabilirsin.


    if(condition){
        kodlar
    }else if(condition){
        kodlar
    }else if(condition){
        kodlar
    }else{
        kodlar
    }

    */

    int a;
    int b;

    printf("Lutfen a sayisini giriniz : \n");
    scanf("%d", &a);

    printf("Lutfen b sayisini giriniz : \n");
    scanf("%d", &b);

    if(a>b){
        printf("a buyuktur b'den.\n");
    }else if(a==b){
        printf("a b'ye esittir.\n");
    }else{
        printf("a b'den kucuktur.\n");
    }

    return 0;
}
