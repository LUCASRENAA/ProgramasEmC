#include <stdio.h>

//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/tutorial/
int main()
{
	int num;
	char text[15];	
	scanf("%d", &num);
	scanf("%s", &text);

	//fgets(text,15,stdin);

	printf("%d\n",num*2);
	printf("%s",text);

	
}
