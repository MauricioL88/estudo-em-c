/*
	Escreva um programa que leia do teclado um vetor de 10 posicoes. Escreva na tela
	quantos valores pares foram armazenados nesse vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vet[10], qtd = 0;
	
	for(l = 0; l < 10; l++) {
		printf("Digite o valor numero %d: ", l+1);
		scanf("%d",&vet[l]);
		
		if(vet[l]%2 == 0) {
			++qtd;
		}
	}
	
	printf("\nQuantidade de numeros pares digitados foram: %d\n\n",qtd);
	
	return 0;
}
