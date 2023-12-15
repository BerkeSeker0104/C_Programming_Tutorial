#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //strlen() kullan�m�

    char berke[] = "Aralik";

    printf("Karakter dizisinin boyu: %d \n", strlen(berke));
    printf("Karakter dizisinin boyu: %d \n", sizeof(berke)); // "\0" bunuda sayacak ve boyunu 7 bulacak

    //strcmp() kullan�m�

    int sonuc;
    char ipek[] = "abcdefg"; //ascii kodlarinda kucuk harfler daha buyuk degerlerdedir.
    char gorke[] = "ABCDEFG";

    sonuc = strcmp(ipek, gorke);

    if(sonuc<0){
        printf("ipek, gorkeden daha kucuktur.\n");
    }else if(sonuc>0){
        printf("ipek, gorkeden daha buyuktur.\n");
    }else{
        printf("ipek ile gorke birbirine esittir.\n");
    }

    // strncmp() kullanimi

     sonuc = strncmp(ipek, gorke, 4); // tek fark kac karaktere bakacag�n� belirtir

   if(sonuc<0){
        printf("ipek, gorkeden daha kucuktur.\n");
    }else if(sonuc>0){
        printf("ipek, gorkeden daha buyuktur.\n");
    }else{
        printf("ipek ile gorke birbirine esittir.\n");
    }

    //strcpy() kullanimi

    char first_name[]= "Benim adim berke";
    char new_name[100];

    strcpy(new_name, first_name); //new_name dizisine atama yaptik

    printf("%s\n", new_name);


    //strncpy () kullanimi

    char second_name[]= "Benim adim ipek";
    char copy_name[100]="";

    strncpy(copy_name, second_name,5);
    printf("%s\n", copy_name);


    //strcat() kullanimi

    char bos[100];

    strcpy(bos,"Benim");

    strcat(bos," adim");
    strcat(bos," Berke");

    printf("%s\n", bos);

    //strncat() kullanimi

    // kullanicidan birinci karakter dizisi icin yazi isteyin, sonra ikinci icin isteyin,
    // birinci yazinin sonuna ikinci diziden kac karakter eklemek istedigini kullanicadan iste
    // birlestirmeden once ve sonray� ekrana bastir

    char birinci_dizi[100];
    char ikinci_dizi[100];
    int a;

    printf("Lutfen birinci diziye yazi giriniz : \n");
    scanf("%s", &birinci_dizi);

    printf("Lutfen ikinci diziye yazi giriniz : \n");
    scanf("%s", &ikinci_dizi);

    printf("Birinci yazinin sonuna kac karakter girmek istedigini girin:\n");
    scanf("%d", &a);

    printf("Birlesmeden once: %s\n", birinci_dizi);

    printf("Birlesmeden sonra: %s\n", strncat(birinci_dizi, ikinci_dizi, a));

    // gets() and fgets() kullanimi

    char name[30];

    printf("Lutfen isminizi giriniz : \n");

    // gets(name);   --- guvenlik riski oldugu icin fgets() kullaniyoruz

    fgets(name, sizeof(name), stdin);

    printf("isminiz : %s \n", name);




    // strrev() Fonksiyonu

    char new_dizi[100];

    printf("Lutfen dizimize isminizi giriniz : \n");
    scanf("%s", &new_dizi);

    printf("Girdiginiz ad : %s \n", new_dizi);
    printf("Girdiginiz adin ters cevrilmis hali : %s \n", strrev(new_dizi));




    // strlwr fonksiyonu

    char universite_adi [100];

    printf("Lutfen universite adinizi buyuk harflerle giriniz: \n");
    fgets(universite_adi, sizeof(universite_adi), stdin);

    printf("Girdiginiz universite adi : %s \n", universite_adi);
    printf("Girgidiniz universite adinin kucuk harfli yazimi : %s \n ", strlwr(universite_adi));


    // strupr() kullanimi

    char universite_adi [100];

    printf("Lutfen universite adinizi kucuk harflerle giriniz: \n");
    fgets(universite_adi, sizeof(universite_adi), stdin);

    printf("Girdiginiz universite adi : %s \n", universite_adi);
    printf("Girgidiniz universite adinin buyuk harfli yazimi : %s \n ", strupr(universite_adi));






    // strstr() kullanimi

    char can[100] = "C dilini ogreniyoruz";
    char *sub;

    sub=strstr(can, "dil");
    printf("Arama sonrasi yeni string: %s", sub);



    return 0;
}
