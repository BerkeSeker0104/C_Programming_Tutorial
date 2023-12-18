#include <stdio.h>
#include <stdlib.h>

int islemyapanfonksiyon(int x, int y, int islem)
{
         if(islem == '+'){

        printf("Tamsayilarin toplami : %d \n", x+y);
    }else if(islem == '-'){
        if(x>y){
            printf("Tamsayilarin farki : %d \n", x-y);
        }else   {
            printf("Tamsayilarin farki : %d \n", y-x);
            }
    }else if(islem == '*'){
        printf("Tamsayilarin carpimi : %d \n", x*y);
    }else if(islem == '/') {
        if(x>y){
            printf("Tamsayilarin bolumu : %d \n", x/y);
        }else{
            printf("Tamsayilarin bolumu : %d \n", y/x);
        }
    }else {
        printf("Hatali giris yaptiniz ! \n");
    }
}




int main()
{
    // klavyeden girilen iki tamsayinin toplamini, farkini, carpimini ve bolumunu gerceklestiren
    // C programýný fonksiyon kullanarak yaziniz.

    int tamsayi1, tamsayi2, islemsonucu, sonuc;
    char islem;

    printf("Lutfen yapmak istediginiz islemi girin: \n");
    scanf("%c", &islem);

    printf("Lutfen iki adet tamsayi giriniz: \n ");
    scanf("%d%d", &tamsayi1, &tamsayi2);

    // fonksiyon kullanarak programýmýzý yazalým :
    sonuc = islemyapanfonksiyon(tamsayi1, tamsayi2, islem);




     // fonksiyon kullanmadan programimizi yazalim :

    if(islem == '+'){

        printf("Tamsayilarin toplami : %d \n", tamsayi1+tamsayi2);
    }else if(islem == '-'){
        if(tamsayi1>tamsayi2){
            printf("Tamsayilarin farki : %d \n", tamsayi1-tamsayi2);
        }else   {
            printf("Tamsayilarin farki : %d \n", tamsayi2-tamsayi1);
            }
    }else if(islem == '*'){
        printf("Tamsayilarin carpimi : %d \n", tamsayi1*tamsayi2);
    }else if(islem == '/') {
        if(tamsayi1>tamsayi2){
            printf("Tamsayilarin bolumu : %d \n", tamsayi1/tamsayi2);
        }else{
            printf("Tamsayilarin bolumu : %d \n", tamsayi2/tamsayi1);
        }
    }else {
        printf("Hatali giris yaptiniz ! \n");
    }




    return 0;
}
