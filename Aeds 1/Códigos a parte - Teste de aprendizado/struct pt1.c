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
    pizza p;

    //Recebe o nome, pre�o e tamanho
    puts ("Digite o nome da pizza: ");
    fgets (p.nome, 50, stdin);
    fflush (stdin);
    puts ("\nDigite o pre�o da pizza: ");
    scanf ("%f", &p.preco);
    fflush (stdin);
    puts ("\nDigite o tamanho da pizza: ");
    fgets (p.tamanho, 50, stdin);
    fflush (stdin);
    system("cls");

    printf ("--------------- Pizza informada ---------------\n");
    printf ("\tNome: %s", p.nome);
    printf ("\tPre�o: %.2f\n", p.preco);
    printf ("\tTamanho: %s", p.tamanho);
}
