#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	char genero;

	printf("Digite o genero: M ou F\n");
	scanf("%c",&genero);
	
	switch(genero)
	{
	case 'M':
		
		printf("Masculino");		
		break;
		
		
	case 'F':
		printf("Feminino");		

		break;
		

	default:
				printf("erro");
				break;
	
	}




    return 0;
}
