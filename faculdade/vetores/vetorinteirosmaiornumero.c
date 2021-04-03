#include <stdio.h>

/* 3) Criar uma função que receba um vetor de inteiros e retorne o maior valor?
  */


 int maiorFunction (int numero [], int tamanho)
 {
     int maior,menor,i;

     for	( i = 0; i < tamanho; i++)
 	{
     if (i==0)
 			{
 				maior = numero[i];

 				menor = numero[i];


 			}
 			if (numero[i] > maior)
 			maior = numero[i];
 			if(numero[i] < menor)
 			menor = numero[i];

 	}
     return maior;
 }




 int main()
 {
         printf("\n---------------------- Programa feito por Naner ----------------------\n");

 	int maior,menor,i,tamanho;
 	printf("Digite o tamanho\n");
 	scanf("%d",&tamanho);

 	int numero[tamanho];

 	for	(i = 0; i < tamanho; i++)
 	{

 			printf("\nDigite o numero: %d\n",i+1);
 			scanf("%i",&numero[i]);

 	}

     printf("O maior: %d .", maiorFunction(numero,tamanho) );



         printf("\n---------------------- Programa feito por Naner ----------------------\n");

     return 0;
 }