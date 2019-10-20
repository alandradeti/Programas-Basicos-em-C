#include <stdio.h>
//Autor: Ailton Lima de Andrade
int main(){
    int matriz[3][3]; //Declaracao da matriz 
    int linha, coluna;

    //leitura dos dados da matriz
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    //Imprimir a matriz
    for (linha = 0; linha < 3; linha++){
        printf("\n");
        for (coluna = 0; coluna < 3; coluna++)
            printf("%d", matriz[linha][coluna]);
        printf("\n");
    }
}
