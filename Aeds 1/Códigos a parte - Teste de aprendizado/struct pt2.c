
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Cria��o da struct
typedef struct pizza {
    char nome[50];
    float preco;
    char tamanho [15];
};

//Declara��o para uso sem struct
typedef struct pizza pizza;

int main (void){
    setlocale (LC_ALL, "Portuguese");
    //Recebe a quantidade de pizzas
    int quantidade;
    puts ("Quantas pizzas ser�o cadastradas?");
    scanf ("%d", &quantidade);
    fflush (stdin);
    system ("cls");
    pizza p[quantidade];

    //Recebe o nome, pre�o e tamanho
    for (int i = 0; i < quantidade; i++){
    puts ("Digite o nome da pizza: ");
    fgets (p[i].nome, 50, stdin);
    fflush (stdin);
    puts ("\nDigite o pre�o da pizza: ");
    scanf ("%f", &p[i].preco);
    fflush (stdin);
    puts ("\nDigite o tamanho da pizza: ");
    fgets (p[i].tamanho, 50, stdin);
    fflush (stdin);
    system("cls");
    }

    for (int i = 0; i < quantidade; i++){
    printf ("--------------- Pizza %d informada---------------\n", i+1);
    printf ("\tNome: %s", p[i].nome);
    printf ("\tPre�o: %.2f\n", p[i].preco);
    printf ("\tTamanho: %s", p[i].tamanho);
    printf ("\n");
    }
}
