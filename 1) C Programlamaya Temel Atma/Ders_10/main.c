#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Do while kullanýmý
    /*
        "do while" dongusu, kod blogun en az bir kez calistirilmak icin kullanilan dongu yapisidir.
        "while" kosulunun kontrol edilmeden kod calýstýrýlýr dogru ise, dongu kod blogunu yeniden
        tekrar calistirmaya devam eder. Yanlis ise dongu sona erer.
    */


    int i = 15;

    do {
        printf("%d \n", i);

    }while(i<=10);

    // yukarida kosul yanlis ama kod blogu bir kez olsun calisir ve 15 yazar.


    // kullanicidan bir sayi isteyiniz ve 1'den 10'a kadar carpa carpa ilerleyerek ekrana yazdiriniz.
    // do while kullaniniz.

    int sayi;
    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d", &sayi);

    int x=1 ;

    do{
        printf("%d \n", sayi*x);
        x++;
    }while(x<=10);



    return 0;
}
