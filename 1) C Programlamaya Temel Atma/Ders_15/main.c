#include <stdio.h>
#include <stdlib.h>

int main()
{
    // For dongusu ile kullanicidan tek boyutlu sayi dizisi degerleri alma ve basma

    // kullanicidan uc tane sayi iste ve ekrana bastir

    int sayilarim[3];

    int i =0;

    for( i=0; i<3; i++){
        scanf("%d", &sayilarim[i]);

    }for( i=0; i<3; i++){
        printf("%d \n", sayilarim[i]);
    }

    // while dongusu ile kullanicidan tek boyutlu sayi dizisi degerleri alma ve bastima

    while(i<3){
        scanf("%d", &sayilarim[i]);
        i++;
    }

    i=0;

    while(i<3){
        printf("%d ", sayilarim[i]);
        i++;
    }
    
    // do while ile kullanicidan tek boyutlu sayi dizisi degerleri alma ve basma

    do {
        scanf("%d", &sayilarim[i]);
        i++;
    }while(i<3);

    i=0;

    do{
        printf("%d", sayilarim[i]);
        i++;
    }while(i<3);

    return 0;
}
