/*
	Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
	tela os valores lidos.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int vlr[6], l;
		
	for(l = 0; l < 6; l++) {
		printf("Digite um valor inteiro: ");
		scanf("%d",&vlr[l]);
	}
	
	printf("\n");
	for(l = 0; l < 6; l++) {
		printf("Numero %d digitado: %d\n", l+1, vlr[l]);
	}
		
	return 0;
}

