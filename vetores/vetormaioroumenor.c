#include <stdio.h>

/* 5) Criar uma função que receba um vetor de inteiros por parâmetro e ordene esse vetor utilizando a função maior OU a função menor das questões anteriores. Inspire-se no método da bolha?
  */

void print (int numero[], int n) {
  int i;

  for (i=0; i<n; i++) printf("%3d ", numero[i]);
  printf("\n");

  }
int arrumando (int numero [], int tamanho,int opcao)
{
    int maior,menor,i,guardar,guardar2,j;

    for	( i = 0; i < tamanho; i++)
	{
    for ( j=0; j<tamanho-i-1; j++)
        if (opcao == 0)
        {
          if (numero[j]>numero[j+1])
          {
            guardar = numero[j]; // presevar V[j]
            numero[j] = numero[j+1];
            numero[j+1] = guardar;
            }
}

if (opcao == 1)
        {
          if (numero[j]<numero[j+1])
          {
            guardar = numero[j]; // presevar V[j]
            numero[j] = numero[j+1];
            numero[j+1] = guardar;
            }
}
}
}




int main()
{
         printf("\n---------------------- Programa feito por Naner ----------------------\n");

	int maior,menor,i,tamanho,opcao;
	printf("Digite o tamanho\n");
	scanf("%d",&tamanho);

	int numero[tamanho];

	for	(i = 0; i < tamanho; i++)
	{

			printf("\nDigite o numero: %d\n",i+1);
			scanf("%i",&numero[i]);

	}
    printf("digite 0 para menor para o maior e 1 para maior para o menor\n");
    scanf("%d",&opcao);
        printf("antes\n");

  print(numero, tamanho);
    arrumando(numero, tamanho,opcao);
            printf("depois\n");

      print(numero, tamanho);





         printf("\n---------------------- Programa feito por Naner ----------------------\n");

    return 0;
}