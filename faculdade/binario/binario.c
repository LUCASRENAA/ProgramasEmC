#include <stdio.h>

int main()
{
	int num,contador,resultado,resultadoteste,resto,i,contador1;


	printf("Coloque o numero para passar de decimal para binario \n");
	
    scanf("%d",&num);
    resultado = num;
    printf("%d \n",resultado);
    resultadoteste = num;
	
	while (resultadoteste > 1)
	{
		resultadoteste = resultadoteste / 2;
		contador1 = contador1  + 1;

	}
	
	printf("%d contador1 \n", contador1);
	int vetor[contador1 + 1 ];

	
	
    
    while (resultado > 1)
	{
		contador = contador +  1;
		resto = resultado % 2;

		resultado = resultado / 2;
		printf("%d resultado \n",resultado);
		printf("%d resto \n",resto);
		vetor[contador-1] = resto;
		printf("%d \n",contador-1);


		
	} 
	printf("%d final resultado\n",resultado);
	vetor[contador] = 1;


	for (i=0;i<(contador1+1);i++)
	
		printf("%d ",vetor[contador1-i]);
	
    
    

    return 0;
}
