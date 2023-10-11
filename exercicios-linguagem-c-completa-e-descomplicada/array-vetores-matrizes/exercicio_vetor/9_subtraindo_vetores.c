/*
	Faca um programa que receba do usuario dois arrays, A e B, com 10 numeros in-
	teiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados
	do array C.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vetA[2], vetB[2], vetC[2];
	
	for(l = 0; l < 2; l++) {
		printf("Digite um numero no vetor 1 - posicao %d: ", l+1);
		scanf("%d",&vetA[l]);
		printf("Digite um numero no vetor 2 - posicao %d: ", l+1);
		scanf("%d",&vetB[l]);
		
		vetC[l] = vetA[l] - vetB[l];
	}
	
	printf("\nResultado da subtracao no vetor C:\n");
	for(l = 0; l < 2; l++) {
		printf("Posicao %d: %d\n", l+1, vetC[l]);
	}
	
	return 0;
}
