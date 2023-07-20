#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Kullanicidan 3 adet sayi aliniz, en buyuk sayiyi ilk basta sadece if kullanarak
    // daha sonra if-else if-ele bulan program ile  yaziniz.


    int a,b,c;

    printf("Lutfen 3 adet sayi giriniz : \n");
    scanf("%d%d%d", &a,&b,&c);

    printf("%d %d %d ", a,b,c);

    if (a>b && a>c){
        printf("%d en buyuk sayidir.\n", a);
    }else if(b>a && b>c){
        printf("%d en buyuk sayidir. \n", b);
    }else if(c>a && c>b){
        printf("%d en buyuk sayidir.\n", c);
    }else{
        printf("Hepsi birbirine esittir.\n");
    }

    // kullanicidan bir sayi isteyiniz, if else kullanarak sayinin tek mi cift mi oldugunu
    // ekrana basan bir program yaziniz

    int sayi;

    printf("Lutfen sayi giriniz : \n");
    scanf("%d", &sayi);

    if(sayi%2==0){
        printf("%d sayisi cift sayidir. \n",sayi);
    }else{
       printf("%d sayisi tek sayidir. \n",sayi);
    }

    return 0;
}
