#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Cok boyutlu sayi dizileri

    // 2 Boyutlu Sayi Dizileri

    int berke[2][2] = {{4, 6},{2, 3}};

    printf("%d \n", berke[0][1]); //1.dizideki ikinci elemani verecek.

    // NxN eleman iceren bir program yaziniz.

    int mat[10][10];

    int i,j;

    for(i=0;i<10;i++){

        for(j=0;j<10;j++){

           if(i==j){

                mat[i][j]=1;
           }else{
                mat[i][j]=0;
           }
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    // NxP eleman iceren 2 matrisin elemanlarini toplayan bir C programi yazin.Sonucu 3.bir matriste yazdirin.


    int dizi1[3][4]={{1,2,5,7}, {5,4,8,6}, {7,1,6,5}};
    int dizi2[3][4]={{1,8,5,7}, {1,2,4,6}, {3,7,3,1}};
    int toplam[3][4];
    int a,b;

    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            toplam[a][b]=dizi1[a][b]+dizi2[a][b];
        }
    }

     for(a=0;a<3;a++){
        for(b=0;b<4;b++){

            printf("%4d", toplam[a][b]);
            }
            printf("\n");
    }



    return 0;
}
