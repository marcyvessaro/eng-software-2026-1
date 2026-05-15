#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	int i,num;

		printf("Deseja consultar a tabuada de qual numero? \n");
		scanf("%i",&num);
		
		for(i=1;i<=10;i++){
			printf("%i * %i=%i\n",num,i,num*i);
		
		}
		
		

}
