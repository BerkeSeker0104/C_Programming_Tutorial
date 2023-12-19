#include <stdio.h>
#include <stdlib.h>

int main()
{
    // kisinin secimlerde yasal olarak oy kullanip kullanamicagini ekrana bastiran
    // program yazalým

    int yas;
    printf("Lutfen yasinizi giriniz : \n");
    scanf("%d", &yas);

    if (yas>=18){
        printf("Oy kullanabilirsiniz.");
    }else{
        printf("Oy kullanamazsiniz cunku yasiniz yetmiyor.");
    }


    // Kullanicidan 2 adet sayi aliniz buyukluk kucukluk durumuna gore
    // ekrana bastirma islemini yapiniz

    int sayi_1;
    int sayi_2;

    printf("Lutfen birinci sayiyi giriniz: \n");
    scanf("%d", &sayi_1);

    printf("Lutfen ikinci sayiyi giriniz: \n");
    scanf("%d", &sayi_2);

    if(sayi_1>sayi_2){
        printf("%d buyuk olan sayidir.", sayi_1);
    }else if(sayi_2>sayi_1){
        printf("%d buyuk olan sayidr.", sayi_2);
    }else{
        printf("Sayilar birbirine esittir.");
    }


    // Yukaridaki ornegi farklý bir sekilde yapalým

    int x;
    int y;
    printf("Lutfen iki adet sayi girelim : \n");
    scanf("%d %d", &x, &y);

    if(x >= y){

            if(x==y){
                printf("Sonuc : %d = d", x, y);
            }else{
                printf("Sonuc : %d > %d", x, y);
            }

    }else{
        printf("Sonuc : %d < %d", x,y);
    }


    return 0;
}
