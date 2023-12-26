#include <stdio.h>
#include <stdlib.h>

// FUNCTIONS

int tekmiciftmi(int degisken)
{
    if(degisken%2==0)
    {
        return 1;

    }else {

        return 0;
    }
}

int main()
{
    int sayi, sonuc;
    printf("Lutfen bir sayi giriniz : \n");
    scanf("%d", &sayi);

    sonuc=tekmiciftmi(sayi);

    if(sonuc==1)
    {
        printf("Sayimiz cift sayidir.\n");
    }
    if(sonuc==0)
    {
        printf("Sayimiz tek sayidir.\n");
    }

    return 0;
}
