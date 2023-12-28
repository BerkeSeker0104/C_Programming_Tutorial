#include <stdio.h>
#include <stdlib.h>

void kare(int *sonuc, int *sayi)
{
    *sonuc= *sayi**sayi;
}

int main()
{
    // Degiskenin adresiyle degisim

    int x=4, sonucum;
    kare(&sonucum, &x);

    printf("%d \n", sonucum);

    return 0;
}
