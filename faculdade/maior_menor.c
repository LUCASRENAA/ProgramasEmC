#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	int numero[5],maior,menor,i;
	printf("Codigo para ver qual é o maior e o menor numero entre os 5\n");
	
	for	(i = 0; i < 5; i++)
	{
			
			printf("Digite o numero: %d\n",i+1);
			scanf("%i",&numero[i]);
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

 	printf("O maior: %d\n O menor: %d",maior,menor);




    return 0;
}
