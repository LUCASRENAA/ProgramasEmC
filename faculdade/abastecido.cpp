#include <stdio.h>

/* Os motoristas se preocupam com o consumo de combust�vel de seus autom�veis. Um motorista manteve um registro do n�mero de abastecimentos que fez, registrando tamb�m o n�mero de quil�metros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que pe�a o n�mero de quil�metros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa dever� calcular e exibir a quantidade de quil�metros rodados por litros usados. Depois de processar toda a informa��o, o programa dever� calcular e exibir o total combinado de quil�metros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor. */
int main()
{
	int pontos;
	
	printf("Digite quantos pontos o carro passou\n");
	scanf("%d",&pontos);
	
	float km[pontos],l[pontos],abastecido[pontos],somakm,somal;
	somakm = 0;
	somal = 0;
	
	
		
	for	(int i = 0; i < pontos; i++)
	{
		printf("Digite quantos kms o carro andou \n");
	scanf("%f",&km[i]);
	somakm = somakm + km[i];
	
	printf("Digite quantos l o carro andou\n");
	scanf("%f",&l[i]);
		somal = somal + l[i];

	
	printf("Digite quantos l o carro foi abastecido\n");
	scanf("%f",&abastecido[i]);
	
	printf("o consumo foi de %.2f km/l\n",km[i]/l[i]);
			
	
	}
	
	printf("O km total foi: %.2f KM \n", somakm);
		printf("O l total foi: %.2f L \n", somal);
		
		
			printf("O consumo total foi: %.2f KM/L \n", somakm/somal);







    return 0;
}
