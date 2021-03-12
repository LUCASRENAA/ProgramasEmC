#include <stdio.h>

/* Os motoristas se preocupam com o consumo de combustível de seus automóveis. Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor. */
int main()
{
	float emprestimo,taxa,dias,juros;
	emprestimo = 0;
	while(emprestimo != -1)	
	{
		printf("Entre com o valor do emprestimo (-1 para terminar): \n");
		scanf("%f",&emprestimo);
		if (emprestimo == -1)
		{
			return 0;

		}
		printf("Entre com a taxa de juros: \n");
		scanf("%f",&taxa);


printf("Entre com o periodo de emprestimo de dias: \n");
		scanf("%f",&dias);
		
		juros =  (emprestimo * taxa *  dias) /365;
		
		printf("O valor dos juros: %.2f\n",juros);
		

		

	}






    return 0;
}
