#include <stdio.h>

/* Programa para determinar o maior de tres inteiros  */
int main()
{
	int numero,a,b,c,d;
	printf("digite o numero de cinco letras");
	scanf("%d",&numero);
	a = numero%10;
	b = (numero%100)/10;
	c = (numero/10000);
	d = (numero/1000)%10;
	
	if (a == c)
	{
		if (d == b)
		{
			printf("palíndromo");
		}
		else
		printf("não é palíndromo ");
		
		
	}
	else
		printf("não é palíndromo");


    return 0;
}
