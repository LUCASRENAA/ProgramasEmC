/*
6) Crie uma função que receba duas "strings" e retorne um inteiro que identifique se a primeira string está contida na segunda. Exemplo: retorna 0 (zero) se está contida, 1 se não está contida.
*/

#include <stdio.h>

int contar(char nome[])
{
    int contador=0;


    while (nome[contador] != '\0')
    {
        contador++;

    }
    return contador;

}


int contem (char nome1 [] , char nome2 [] )
{
    int i,maior,igual,menor,opa;
     igual = 0;
    int retorno = 1;
    int contador1 = 0;
    int valor = 0;

    int tamanho1,tamanho2;

    tamanho1 = contar(nome1);
    tamanho2 = contar(nome2);

    if (tamanho1 > tamanho2)
    {
    maior = tamanho1;
    menor = tamanho2;
    }


    if (tamanho2 > tamanho1)
     {
        maior = tamanho2;
        menor = tamanho1;
        }


    if (tamanho1 == tamanho2)
 {
    maior = tamanho1;
    menor = tamanho2;
    }

    opa = 0;

    int k = 0;
    int contador = 0;
      while (maior != contador)
        {
            if  (tamanho1 == menor){

            if (nome1[k] == nome2[contador])
                        {
                            contador1++;

                            k = k + 1;


                        }
                        else
                        {
                            contador1 = 0;
                            k = 0;
                        }

            }

            else{

             if (nome1[contador] == nome2[k])
                                    {
                                        contador1++;

                                                                    k = k + 1;

                                    }
                                    else
                                    {
                                        contador1 = 0;
                                                                    k = 0;

                                    }

                        }



            if (contador1 == tamanho1)
            valor = 1;
            igual = 1;

            if (contador1 == tamanho2)
            valor = 2;
            if (igual == 1 && valor ==2)
            if (contador == maior)
            valor = 3;


            contador++;





    }



    return valor;


}


int main(int argc, char *argv[])
{

    char *nome1;
    char *nome2 ;

    nome1 = argv[1];
    nome2 = argv[2];



    if (contem (nome1, nome2) == 3)
    printf("sao iguais %s e %s",nome1,nome2);

    if (contem (nome1, nome2) == 0)
    printf("sao diferentes %s e %s",nome1,nome2);


    if (contem (nome1, nome2) == 1)
    printf(" %s esta em %s",nome1,nome2);


    if (contem (nome1, nome2) == 2)
    printf(" %s esta em %s",nome2,nome1);




    return 0;
}
