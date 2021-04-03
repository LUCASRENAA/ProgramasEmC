#include <stdio.h>

int main()
{
	float nota,falta;
	printf("Digite o sua primeira nota\n");
	scanf("%f",&nota);
	falta = 14-nota;
	
	printf("Amigão, tu precisa tirar %.2f pra passar direto\n",falta);
	
	if (falta > 10)
 	printf("tu não passa mais não visse kkkkkkkkkkkkkkkkkkkkkkk");
 	else
 	printf("Tenta tirar a nota, se não estás lascado",falta);



    return 0;
}
