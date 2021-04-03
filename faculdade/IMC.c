#include <stdio.h>

int main()
{
	float peso,altura;
	printf("Digite o seu peso em KG\n");
	scanf("%f",&peso);
	printf("\nDigite a sua altura em metros\n");
	scanf("%f",&altura);
	
	printf("Seu IMC: %.2f KG/M²",(peso)/(altura*altura));

    return 0;
}
