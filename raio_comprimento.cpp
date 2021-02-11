#include <stdio.h>

int main()
{
	float raio,comprimento;
	printf("Digite o valor do raio, para achar o comprimento\n");
	scanf("%f",&raio);
	comprimento = raio * 3.14 * 2 ;
	printf("O valor do comprimento: %.2f  ",comprimento);

    return 0;
}
