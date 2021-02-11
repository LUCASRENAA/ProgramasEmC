#include <stdio.h>

int main()
{
	float raio,area;
	printf("Digite o valor do raio, para achar a area\n");
	scanf("%f",&raio);
	area = (raio*raio) * 3.14  ;
	printf("O valor da area: %.2f  ",area);

    return 0;
}
