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
			printf("pal�ndromo");
		}
		else
		printf("n�o � pal�ndromo ");
		
		
	}
	else
		printf("n�o � pal�ndromo");


    return 0;
}
