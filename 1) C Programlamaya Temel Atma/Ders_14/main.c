#include <stdio.h>
#include <stdlib.h>

int main()
{

    // TEK BOYUTLU DIZILER



   int can[5] = {1, 3, 5, 7, 9};

   printf("%d \n", can[0]); //dizinin ilk elemanini yazdiracak


    // Diziye ilk 10 cift elemani entegre eden bir kod yazin

    int ipek[10];
    int i;

    for(i=0; i<10; i++){        // Buradaki for dongusu dizimize eleman atadik

        ipek[i]=i*2;
    }

    for(i=0; i<10; i++){        // Buradaki for dongusu dizimi bastirmak icin yazildi

        printf("%d \n", ipek[i]);
    }




    // Dizi elemanlarina yeni deger atamasi yapma

    int berke[5] = {220, 236, 15, 01, 04};

    printf("%d \n", berke[3]); // Burada 4. elemanimizin ilk halini yani "1" goreceksin

    berke[3]=5; // dizideki 4.elemanimiz "5" degeri atadik

    printf("%d \n", berke[3]); // Burada 4.elemani degistirilmis sekilde gorduk




    // For dongusu ile kullanicidan tek boyutlu sayi dizisi degerleri alma ve bastirma

    int sayilarim[3];

    for(int i=0; i<3; i++){
        printf("Lutfen dizi icin deger giriniz : \n");
        scanf("%d", &sayilarim[i]); //kullanicidan dizi icin deger alicaz
    }

    for(int i=0; i<3; i++){
        printf("%d \n", sayilarim[i]);
    }



    // While Dongusu ile kullanicidan tek boyutlu sayi dizisi deger alma ve bastirma

    int rakamlar[3];
    int a =0;

    while(a<3){
        scanf("%d", &rakamlar[a]);
        a++;
    }

    a=0;
    while(a<3){
        printf("%d \n", rakamlar[a]);
        a++;
    }



    // Do while dongusu ile kullanicidan tek boyutlu sayi dizisi deger alma ve bastirma

    int number[3];
    int b=0;

    do{
        scanf("%d", &number[b]);
        b++;
    }while(b<3);

    b=0;

    do{
        printf("%d \n", number[b]);
        b++;
    }while(b<3);








    return 0;
}
