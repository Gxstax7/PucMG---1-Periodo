#include <stdio.h>
#include <stdlib.h>

//Fun��o para aloca��o e preenchimento da matriz
char ** preencheMatriz (int linhas, int colunas){
    //Aloca o espa�o para as linhas e recebe como conteudo outros ponteiros (vetores)
    char ** matriz;
    matriz = (char*) malloc (linhas * sizeof (char*));

    //Aloca o espa�o para as colunas da matriz e recebe como conteudo apenas caracteres
    for (int i = 0; i < linhas; i++)
        matriz[i] = (char*) malloc (colunas * sizeof(char));

    //Itera��o para preenchimento da matriz
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf ("Digite o conteudo da posicao Linha[%d] Coluna [%d]: ", i+1, j+1);
            scanf (" %c", &matriz[i][j]);
    }
    }

    return matriz;
}

void imprimiMatriz (char** matriz, int linhas, int colunas){

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf ("%c  ", matriz[i][j]);

        printf ("\n");
    }

}

int main (){

    //Recebe o tamanho da matriz;
    int linhas, colunas;
    printf ("Digite o numero de linhas e de colunas:\n");
    scanf ("%d %d", &linhas, &colunas);

    char ** matriz;

    //Separa a ultima entrada da apresenta��o e chama a fun��o de preenchimento
    printf ("\n");
    matriz = preencheMatriz (linhas, colunas);

    //Ap�s receber o conte�do da matriz, chama a fun��o para imprimi-l�
    imprimiMatriz (matriz,linhas,colunas);
}
