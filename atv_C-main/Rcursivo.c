#include <stdio.h>
#include <stdlib.h>

//Aluno : Daniel Alves 08/03/2023

int cont (int num,int n){
	
	if( n < num ){
		n++;
	
	if( n % 2 ==0){
		printf("%i\t",n);
	}
	
	return cont(num,n);
}
	
}

int main(){
	int num,n;
	
	printf("O prgrama vai contar quantos numeros pares existem entre 0 e o numero em questão\n");
	printf("Digite um numero inteiro positivo: ");
	//scanf("%i",&num);
	printf("\n\n");
	num = 20;
	
	cont(num,n);
	
	return 0;
}
