/*
	Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
	tela os valores lidos na ordem inversa.
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
	for(l = 5; l > -1; l--) {
		printf("Numero %d digitado: %d\n", l+1, vlr[l]);
	}
	
	return 0;
}
