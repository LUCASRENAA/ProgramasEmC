#include <stdio.h>

/* Os motoristas se preocupam com o consumo de combust�vel de seus autom�veis. Um motorista manteve um registro do n�mero de abastecimentos que fez, registrando tamb�m o n�mero de quil�metros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que pe�a o n�mero de quil�metros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa dever� calcular e exibir a quantidade de quil�metros rodados por litros usados. Depois de processar toda a informa��o, o programa dever� calcular e exibir o total combinado de quil�metros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor. */
int main()
{
	float saldo,encargos,creditos,limite,novosaldo;
	int numeroconta;
	numeroconta = 0;
	while(numeroconta != -1)	
	{
		printf("Informe o n�mero da conta (-1 para terminar): \n");
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
