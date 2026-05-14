#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float num1,num2;
	char oper;
	
	
	do{
		printf("Que calculo quer realizar?");
		scanf("%f",&num1);
		scanf(" %c",&oper);
		scanf("%f",&num2);
		
	switch(oper){
		case '+':
			printf("resultado:\n %.2f \n \n", num1 + num2);
			printf("para sair, digite: 000 \n");
			break;
		
		case '-':
			printf("%.2f \n \n", num1 - num2);
			printf("para sair, digite: 000 \n");
			break;
		
		case '*':
			printf("resultado:\n %.2f \n \n", num1 * num2);
			printf("para sair, digite: 000 \n");
			break;
		
		case '/':
			if (num2!=0){
		
			printf("resultado:\n %.2f \n \n", num1 / num2);
			printf("para sair, digite: 000 \n");
			break;}
			else{
			
			printf("nao tem como dividir por 0 \n");
			break;}
		
			
		default:
		if(num1 != 0 && oper != '0' && num2 != 0){
		
            printf(" Operador invalido\n\n ");}
            else{
			
            printf(" Fechando calculadora!\n ");}
		
			
	
}
		
	}
	
	
	
	while(num1 != 0 && oper != '0' && num2 != 0);

}
