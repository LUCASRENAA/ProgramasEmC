#include <stdio.h>

int main()
{
	float celsius,kelvin;
	printf("Digite o valor em Celsius, para converter em Kelvin\n");
	scanf("%f",&celsius);
	kelvin = celsius + 273;
	printf("O valor em kelvin: %.2f K ",kelvin);

    return 0;
}
