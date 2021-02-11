#include <stdio.h>

int resultado = 1;
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/



int fatorial(int num)
{
	printf("entrei aqui %d\n ",num);

	if (num == 1)
	{
		return resultado;
	}
	else
	{
		resultado = num * resultado;
		num = num - 1;
		fatorial(num);
	}
	
	
}

int main()
{
	int num;
	
	scanf("%d", &num);
	
	
	resultado = fatorial(num);


	printf("%d\n",resultado);
	return 0;


}


