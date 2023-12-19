#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Break kullanimi
    // "break" ifadesi, dongu yapisinin sonlandirir ve bir sonraki adima gecer.

    int i;

    for(i=0; i<=10; i++){
        printf("%d \n", i);
        if(i==4){
            break;
        }
    }

    // Continue kullanimi
    // "continue" ifadesi, dongunun belirli bir kosulunu saglamasi durumda, o adimin islenmesini atlayarak donguye devam etmesini saglar.

    int a;

    for(a=0; a<10; a++){

       if(a==6){
            continue;
        }
        printf("%d \n", a);
    }

    // dongumuz 0'dan baslasin 10'a kadar saysin. Fakat 5'i atlasin ve 8'de bitirsin. "break ve continue" kullan.

    int x;

    for(x=0; x<10; x++){
        if(x==5){
            continue;
        }
        printf("%d \n", x);

        if(x==8){
            break;
        }
    }



    return 0;
}
