#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//esse código pede para o usuário digitar 10 números e no final retorna quantos numeros pares e impares foram digitados
int main (){
	
	int num;
	int pares [10];
	int impares [10];
	
	int qtdPares=0;
	int qtdImpares=0;
	
	for(int i=1;i<=10;i++){
		printf("digite um numero \n");
		scanf("%i",&num);
		
		if(num%2==0){
			pares[qtdPares] = num;
			qtdPares++;
		}
		else{
			impares[qtdImpares] = num;
			qtdImpares++;
		}
	}
	//nessa parte do código, informamos a quantidade de pares e impares e retornamos quais numeros sao pares e quais sao impares
	printf("\nQuantidade de pares: %i", qtdPares);
    printf("\nQuantidade de impares: %i", qtdImpares);
    
    printf("\n Numeros pares informados: \n");
    for (int i=0;i<qtdPares;i++){  //vai repetir 'i' enquanto seu valor for menos que a quantidade de pares encontrados, a mesma coisa com os impares na linha abaixo
    	printf("%i ",pares[i]);
	}
	printf("\n Numeros impares informados: \n");
    for (int i=0;i<qtdImpares;i++){
    	printf("%i ",impares[i]);
	}

}
