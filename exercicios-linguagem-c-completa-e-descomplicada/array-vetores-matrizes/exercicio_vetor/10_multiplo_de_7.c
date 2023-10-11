/*
	Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros
	numeros naturais que nao sao multiplos de 7. Ao final, imprima esse vetor na tela.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vet[101];
	
	for(l = 0; l < 101; l++) {
		vet[l] = (l+1) * 1;
	}
	
	printf("\nNumeros nao multiplos de 7:\n");
	for(l = 0; l < 101; l++) {
		if(vet[l] % 7 == 1)
			printf("%d\n", vet[l]);
	}
	
	return 0;
}
