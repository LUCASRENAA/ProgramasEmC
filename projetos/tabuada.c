#include <stdlib.h>
#include <stdio.h>
int acerto = 0;
int e=1;
int main()
{
   do{


    int tabuada;
    printf("------------------------                     TABUADA                              ------------------------\n");
    printf("========================FEITO                  POR                      LUCASRENAA========================\n");

    printf("Digite o valor da tabuada\n Exemplo: 5\n");
    scanf("%d",&tabuada);
    int calculartabuada();
calculartabuada(tabuada);
if(tabuada==51)
e=2;
   }
while(e==1);
    printf("========================FEITO                  POR                      LUCASRENAA========================\n");

    return 0;
}

int calculartabuada(int tabuada){
    int respostacerta[10],resposta[10];

    if(tabuada>10)
{

     printf("digite o valor entre 10 e 1\n");
     return acerto;
}

     if(tabuada<0)
{

     printf("digite o valor entre 10 e 1 \n");
      return acerto;
}


    for(int contador = 0 ;contador<=10;contador ++){
        printf("%dx%d=",tabuada,contador);
        scanf("%d",&resposta[contador]);


        respostacerta[contador]= tabuada*contador;


        if(resposta[contador]==respostacerta[contador])
        {
         acerto++;
        }
        else
        printf("voce errou\n");

        printf("acertos=%d \n",acerto);


    }
    printf("digite o numero 51 para interromper o código \n");
    return acerto;
}
