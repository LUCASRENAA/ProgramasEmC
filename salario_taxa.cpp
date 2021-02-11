#include <stdio.h>

int main()
{
	char a;
	printf("Digite a letra que você quer ver em maiscula ou minuscula\n");
	scanf("%c",&a);
	
	if (a >94)
	printf("Digitou: %c  ",a-32);
	else
	printf("Digitou: %c  ",a+32);

    return 0;
}
