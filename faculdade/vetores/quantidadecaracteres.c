#include <stdio.h>

/*
1) Criar uma função que receba um vetor de caracteres (palavra, vetor de char) e retorne a quantidade de caracteres (int)?
*/
int contar(char nome[])
{
    int contador=0;

    while (nome[contador] != '\0')
    {
        contador++;

    }
    return contador;

}

int main(int argc, char *argv[])
{
    char *nome;
    printf("---------------------- Programa feito por Naner ----------------------\n");
    printf("como usar? \n./programalinux parametro\n");
    printf("como usar? \nprogramawindows.exe parametro\n");


    nome = argv[1];




    for(int i = 0; i < contar(nome);i++)
    {
    printf("%c",nome[i]);
    }
    printf(" tem %d caracteres\n",contar(nome));
    printf("---------------------- Programa feito por Naner ----------------------\n");





    return 0;
}