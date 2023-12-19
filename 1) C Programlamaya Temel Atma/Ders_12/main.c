#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Switch-Case Kullanimi
    /*
    "switch-case" ifadesi, belirli bir degiskenin veya ifadenin farkli degerlerine gore farkli kod bloklarinin calistirilmasini saglayan bir yapidir.
    Genellikle coklu durumlar veya secenekler arasinda secim yaparken kullanilir.
    Bu yapý, karmasik if-else ifadelerine altenatif bir yaklasim sunar.
    */

    // Kullanicidan 1 ile 7 arasinda bir sayi isteyelim ve kodumuz hangi gun oldugunu ekrana bastirsin.

    int day;
    printf("Lutfen gun giriniz : ");
    scanf("%d", &day);

    switch(day){

    case 1:
        printf("Pazartesi \n");
        break;

    case 2:
        printf("Sali \n");
        break;

    case 3:
        printf("Carsamba \n");
        break;

    case 4:
        printf("Persembe \n");
        break;

    case 5:
        printf("Cuma \n");
        break;

    case 6:
        printf("Cumartesi \n");
        break;

    case 7:
        printf("Pazar \n");
        break;

    default:            //"if-else" yapisinda oldugu gibi "default" ile else ayni mantik.
        printf("Gecersiz gun \n");
        break;
    }

    // kullanicidan bir operator ve iki sayi isteyelim. Dongumuz verilen duruma gore dort islem yapsýn.

    float a,b;

    char op;
    printf("Lutfen bir operator giriniz:\n");
    scanf("%c",&op);

    printf("Lutfen iki sayi giriniz:\n");
    scanf("%f%f",&a,&b);

    switch(op){

    case '+':
        printf("%.2f + %.2f =%.2f", a,b,a+b);
        break;

    case '-':
        printf("%.2f - %.2f =%.2f", a,b,a-b);
        break;

    case '/':
        printf("%.2f / %.2f =%.2f", a,b,a/b);
        break;

    case '*':
        printf("%.2f * %.2f =%.2f", a,b,a*b);
        break;

    default :
        printf("Hatali giris yaptiniz.");
        break;

    }

    return 0;
}
