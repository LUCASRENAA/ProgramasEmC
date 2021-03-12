#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	float hab,nas_or_mort;
	int op;

	printf("Digite 1- natilidade\n 2- mortalidade");


	scanf("%i",&op);
	
		printf("Digite o numero de habitantes");

	scanf("%f",&hab);

	
	switch(op)
	{
	case 1:
		
		printf("nascimentos\n");
			scanf("%f",&nas_or_mort);
			printf("taxa de natalidade: %f",(nas_or_mort*1000)/hab);

		
		break;
		
		
	case 2:
	printf("mortes\n");
			scanf("%f",&nas_or_mort);
						printf("taxa de mortalidade: %f",(nas_or_mort*1000)/hab);

		break;
		
	default:
		printf("erro");
		break;
		
		

	
	}





    return 0;
}
