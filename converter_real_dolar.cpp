#include <stdio.h>

int main()
{
	float real,dolar;
	printf("Digite o valor em Real, para converter em dolar\n");
	scanf("%f",&real);
	dolar = real * 5.38;
	printf("O valor em dolar é %.2f $",dolar);

    return 0;
}
