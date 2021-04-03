#include <stdio.h>
/*
2) Criar uma função que receba um vetor de caracteres (frase, vetor de char) e retorne a quantidade de palavras(int)?

*/

int contar_caracteres(char nome[])
{
    int contador=0;

    while (nome[contador] != '\0')
    {
        contador++;

    }
    return contador;

}
int contar(char nome[])
{
    int contador=0,fraseEspaco = 0;

    while (nome[contador] != '\0')
    {

        if (nome[contador] ==' ')
        {
            fraseEspaco++;
        }

        contador++;

    }
    return fraseEspaco;

}

int main(int argc, char *argv[])
{
    char *nome;

    printf("---------------------- Programa feito por Naner ----------------------\n");
    printf("como usar? \n./programalinux parametro\n");
    printf("como usar? \nprogramawindows.exe parametro\n");


    nome = argv[1];
    for(int i = 0; i < contar_caracteres(nome);i++)
        {
        printf("%c",nome[i]);
        }

    printf(" tem %d espaco",contar(nome));

        printf("\n---------------------- Programa feito por Naner ----------------------\n");

    return 0;




}