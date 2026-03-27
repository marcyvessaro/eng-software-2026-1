#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>	

int main()
{
	float raio, area;
	printf("informe o valor do raio: \n");	
	scanf("%f", &raio);
	
	area=3.14159*(raio*raio);
	printf("a area da circuferencia eh: %.2f", area);
	
}
