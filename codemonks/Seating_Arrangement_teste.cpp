//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/description/
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int quantidade,resultado,resposta;
	scanf("%d",&quantidade);
	
	int vetor[quantidade];
	
	for(int i=0;i<(quantidade);i++)
	{
		scanf("%d",&vetor[i]);
	

	}
	
	for(int j=0;j<quantidade;j++)
	{
		resultado = (vetor[j] % 6 ) ;
		
	
	
			
		if (vetor[j] > 6 || vetor[j] < 55)
			if (vetor[j] > 6 || vetor[j] > 48)
			{
			
				{
					if (resultado == 2)
					{
						resposta = vetor[j] + 9;
						printf("%d MS\n",resposta);
						
					}
					if (resultado == 5)
					{
						resposta = vetor[j] + 3;
						printf("%d MS\n",resposta);
	
						
					}
					
					
					if (resultado == 0)
					{
						resposta = vetor[j] + 1;
						printf("%d WS\n",resposta);
						
					}
					if (resultado == 1)
					{
						resposta = vetor[j] + 11;
						printf("%d WS\n",resposta);
	
						
					}
					
					if (resultado == 4)
					{
						resposta = vetor[j] + 5;
						printf("%d AS\n",resposta);
						
					}
					if (resultado == 3)
					{
						resposta = vetor[j] + 7;
						printf("%d AS\n",resposta);
	
						
					}
				}
			}
		else
			{
				if (resultado == 5)
				{
					resposta = vetor[j] + 3;
					printf("%d MS\n",resposta);

					
				}
				if (resultado == 2)
				{
					resposta = vetor[j] + 9;
					printf("%d MS\n",resposta);

					
				}
				
			
				if (resultado == 0)
				{
					resposta = vetor[j] + 1;
					printf("%d WS\n",resposta);

					
				}
				if (resultado == 1)
				{
					resposta = vetor[j] + 11;
					printf("%d WS\n",resposta);

					
				}
				
				if (resultado == 3)
				{
					resposta = vetor[j] + 7;
					printf("%d AS\n",resposta);
					
				}
				if (resultado == 4)
				{
					resposta = vetor[j] + 5;
					printf("%d AS\n",resposta);

					
				}
				
			
			}
			
	
			
		
		

			
			
				
		
		
		

		
		

				
					


		
}
	return 0;

	}
	

	
	

	
	
	



