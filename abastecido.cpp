#include <stdio.h>

/* Os motoristas se preocupam com o consumo de combustível de seus automóveis. Um motorista manteve um registro do número de abastecimentos que fez, registrando também o número de quilômetros rodados e de litros obtidos a cada abastecimento. Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade de quilômetros rodados por litros usados. Depois de processar toda a informação, o programa deverá calcular e exibir o total combinado de quilômetros por litro para todos os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o consumo devem ser definidos, para fins de teste, pelo desenvolvedor. */
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
