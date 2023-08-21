#include <stdio.h>
#include <stdlib.h>

int main()
{
  // N x N eleman iceren bir program yaziniz.

    int mat[10][10];
    int i, j;

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
        } printf("\n");
    }


    // N x P eleman iceren 2 matrisin elemanlarinin toplayan bir c programi yazin. sonucu 3.matriste yazdirin.

    int dizi1[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int dizi2[3][4]= {{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    int toplam[3][4];
    int a,b;

    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            toplam[a][b]=dizi1[a][b] + dizi2[a][b];
        }
    }

    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            printf("%4d", toplam[a][b]);
        }printf("\n");
    }

    return 0;
}
