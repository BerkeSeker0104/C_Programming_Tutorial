#include <stdio.h>
#include <stdlib.h>

int main()
{
    char berke[]={'i','p','e','k','\0'}; //  "\0" yapma sebebim tek tek karakter girerken, bunun sonlandigi anlamina gelir.
    printf("%s \n",berke);

    char ipek[100]; // burada kullanicidan karakter isterken, kac karakter girebiliriz onu belirtmek zorundayiz
    printf("Lutfen 100 karaktere kadar, karakter giriniz : ");
    scanf("%s", &ipek);
    printf("%s \n", ipek);


    char dizim[] = "gorke seker";
    dizim[6] = 'c';
    printf("%s",dizim);

    return 0;
}
