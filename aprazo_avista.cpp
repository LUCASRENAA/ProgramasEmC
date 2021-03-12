#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	float preco,compra;
	int op;

	printf("Digite 1-  à vista\n 2-  à prazo");
	scanf("%i",&op);
	
		printf("Digite o valor da sua compra\n");
	scanf("%f",&compra);
	

	
	switch(op)
	{
	case 1:
		printf("o desconto é de %.2f\n",(compra*0.10));
		printf("sua compra foi de %.2f reais",(compra*0.90));


		
		break;
		
		
	case 2:
		printf("sua compra foi de %.2f reais",(compra));

		break;
		
	default:
				printf("erro");
				break;

		
		

	
	}




    return 0;
}
