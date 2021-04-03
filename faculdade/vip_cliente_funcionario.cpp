#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	float compra,resultado;
	int op;

	printf("Digite o valor da sua compra\n");
	scanf("%f",&compra);
	printf("Digite 1 se você for cliente normal\n");
		printf("Digite 2 se você for funcionario\n");

	printf("Digite 3 se você for vip\n");

	scanf("%i",&op);
	
	switch(op)
	{
	case 1:
		
		printf("sua compra foi de %.2f reais",compra);
		
		break;
		
		
	case 2:
		printf("sua compra foi de %.2f reais",(compra*0.90));

		break;
		
		
	case 3:
		printf("sua compra foi de %.2f reais",(compra*0.95));

		break;
		
	default:
		printf("erro");
		break;

	}
	
	




    return 0;
}
