#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>	

int main()
{
	float dolar, cot, real;
	printf("informe o valor do dolar: \n");	
	scanf("%f", &dolar);
	printf("informe o valor da cotacao: \n");	
	scanf("%f", &cot);
	
	real=dolar*cot;
	
	printf("o dolar convertido eh: %.2f", real);
	
}
