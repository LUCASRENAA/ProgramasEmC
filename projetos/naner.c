#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int tamanho = 3;
float dinheiro = 600;
int num1,num2,num3,num4,num5,num6 = 5;
int dia = 1;


	
int Resultado (int dinheiro){
	
	srand( (unsigned)time(NULL) );

	
	num1 = 1+rand()%10000;
		num2 = 1+rand()%10000;

	num3 = 1+rand()%10000;
	num4 = 1+rand()%10000;
	num5 = 1+rand()%10000;

	
	
	
	
				printf("Primeiro numero %d\n",num1);
		printf("Segundo numero %d\n", num2);
	printf("Terceiro numero %d\n", num3);

	printf("Quarto numero %d\n", num4);

	printf("Quinto numero %d\n",num5);



	return num1,num2,num3,num4,num5;
	
}


int main (void) {


	
		

	printf("------------------------JOGO DO BICHO PARA COMPUTADOR, CONHEÇA NOSSO JOGO DO BICHO------------------------\n");
	printf("========================FEITO                  POR                      LUCASRENAA========================\n");
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


	//strcpy(arquivo, nome);
	//strcpy(arquivo, tipo);

	//strcat(arquivo, tipo);
	//file = fopen(nome,"r");
	//printf("%s",arquivo);
	


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
	printf("Estamos no dia: %d\n", dia);
	dia = dia +1;
		printf("Digite 1 para jogar \n");
			srand( (unsigned)time(NULL) );	

	


		if (escolhas == 1)
{
	
		
	
	int i;
		printf("Rapaz, você escolheu 1\n");
		int tamanho;
		
		printf("digite o tamanho do vetor\n");
		scanf("%d",&tamanho);
	int jogos[tamanho];
	float aposta[tamanho];	

	for(i = 0; i < tamanho; i++)
	{
		printf("digite a milhar \n");
		scanf("%d",&jogos[i]);
		printf("digite o valor \n");
		scanf("%f",&aposta[i]);
		dinheiro = dinheiro - aposta[i];

	}
	
		num1,num2,num3,num4,num5 = Resultado(dinheiro);
		
	printf("vamos ver se voc� ganhou \n");
	for(i = 0; i < tamanho; i++)
	{
		
		if (jogos[i] == num1){
					dinheiro = dinheiro + aposta[i] * 9000;
					printf("Parab�ns, voc� ganhou no dia: %d, na milhar: %d, e ganhou %d",dia,jogos[i],aposta[i] * 9000);

		}
		if (jogos[i] == num2)
		{
					dinheiro = dinheiro + aposta[i] * 9000;
										printf("Parab�ns, voc� ganhou no dia: %d, na milhar: %d, e ganhou %d",dia,jogos[i],aposta[i] * 9000);


		}
		
		if (jogos[i] == num3)
		{
		
					dinheiro = dinheiro + aposta[i] * 9000;
											printf("Parab�ns, voc� ganhou no dia: %d, na milhar: %d, e ganhou %d",dia,jogos[i],aposta[i] * 9000);


				}
		
		if (jogos[i] == num4){
					dinheiro = dinheiro + aposta[i] * 9000;
										printf("Parab�ns, voc� ganhou no dia: %d, na milhar: %d, e ganhou %d",dia,jogos[i],aposta[i] * 9000);


		}

		
		if (jogos[i] == num5)
		{
					dinheiro = aposta[i] * 9000;
										printf("Parab�ns, voc� ganhou no dia: %d, na milhar: %d, e ganhou %d",dia,jogos[i],aposta[i] * 9000);


		}

	}
}
		printf("Digite 2 para ver pular um dia e ver o resultado \n");

	if (escolhas == 2)
	
{
	num1,num2,num3,num4,num5 = Resultado(dinheiro);
	printf("Voc� n�o jogou dessa vez :(\n");
	printf("%d\n",num1);
	

	
	
}

		printf("Digite 3 para ver o seu dinheiro \n");

	if (escolhas == 3)
{
			printf("%.2f \n",dinheiro);
			dia = dia - 1;


}

		printf("Digite 4 para sair \n");

	if (escolhas == 4)

{

		printf("Rapaz, você escolheu 4\n");
			return 0;


}
		scanf("%d",&escolhas);

}

	printf("========================FEITO                  POR                      LUCASRENAA========================\n");

	return 0;


}
