#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	int i,tamanho;
	printf("Codigo para ver qual é o maior e o menor numero entre os 5\n");
	printf("digite a quantidade de lado");
	scanf("%d",&tamanho);
		char numero[tamanho];


	
	for	(i = 0; i < tamanho; i++)
	{
			
            numero[i] = '*';



	}
	
	
	for	(int j = 0; j < tamanho ; j++)
	{
			
			printf(" \n");
		

     
	
		for	(i = 0; i < tamanho; i++)
	{
			
			printf(" %c", numero[i]);
		

     
	}
	}





    return 0;
}
