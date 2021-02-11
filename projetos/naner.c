#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) {


	
		

	printf("JOGO DO BICHO PARA COMPUTADOR, CONHEÇA NOSSO JOGO DO BICHO \n");
	printf("FEITO POR LUCASRENAA----\n");
	char nome[15];	
	char tipo[4];
	char arquivo[19];
	int escolhas;
	escolhas = 0;
	tipo[0] = '.';
	tipo[1] = 't';
	tipo[2] = 'x';
	tipo[3] = 't';



	

	  



	printf("Digite o seu nome, no máximo 15 letras\n");
	fgets(nome,15,stdin);
	printf("Nome: %s \n",nome);
	FILE *file;


	strcpy(arquivo, nome);
	strcpy(arquivo, tipo);

	//strcat(arquivo, tipo);
	file = fopen(nome,"r");
	printf("%s",arquivo);
	


	if (file == NULL) {
		printf("Estamos criando sua conta:D\n");
		printf("teu nome é muito feio hein meu deus\n");

		file = fopen(nome,"w");
		fprintf(file,nome);
		fclose(file);	
	

	}
	else
{
	printf("tu vem muito aqui?\n");
}


	



	while(escolhas != 4)
{
		printf("Digite 1 para jogar \n");
		if (escolhas == 1)
{
		printf("Rapaz, você escolheu 1\n");

}
		printf("Digite 2 para ver os resultados \n");

	if (escolhas == 2)
{
		printf("Rapaz, você escolheu 2\n");

}

		printf("Digite 3 para ver o seu dinheiro \n");

	if (escolhas == 3)
{
		printf("Rapaz, você escolheu 3\n");

}

		printf("Digite 4 para sair \n");

	if (escolhas == 4)
{
		printf("Rapaz, você escolheu 4\n");

}
		scanf("%d",&escolhas);

}


	return 0;


}