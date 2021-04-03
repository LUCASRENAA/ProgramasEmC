#include <stdio.h>

/* Os motoristas se preocupam com o consumo de combustível de seus automóveis. Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor. */
int main()
{
	float saldo,encargos,creditos,limite,novosaldo;
	int numeroconta;
	numeroconta = 0;
	while(numeroconta != -1)	
	{
		printf("Informe o número da conta (-1 para terminar): \n");
		scanf("%d",&numeroconta);
		if (numeroconta == -1)
		    return 0;

		printf("Informe o saldo inicial: ");
		scanf("%f",saldo);
		
		printf("Informe o total de encargos: ");
		scanf("%f",encargos);
		
		printf("Informe o total de creditos: ");
		scanf("%f",creditos);
		
		
		printf("Informe o limite de credito: ");
		scanf("%f",limite);
		
		novosaldo = saldo + encargos - creditos;
		if (novosaldo > limite)
		{
			printf("Conta: %d",numeroconta);
			printf("Limite de credito: %f",creditos);

			printf("Saldo: %f",saldo);
			printf("Limite de credito ultrapassado");


		}
		
		

	}






    return 0;
}
