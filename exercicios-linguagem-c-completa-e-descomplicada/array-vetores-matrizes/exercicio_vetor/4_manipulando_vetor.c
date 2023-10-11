/*
	Faca um programa que possua um array (vetor) de nome A que armazene seis numeros
	inteiros. O programa deve executar os seguintes passos:
		a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
		b) Armazene em uma variavel a soma dos valores das posicoes A[0], A[1] e A[5]
			do array e mostre na tela essa soma.
		c) Modifique o array na posicao 4, atribuindo a essa posicao o valor 100.
		d) Mostre na tela cada valor do array A, um em cada linha.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, A[6] = {1, 0, 5, -2, -5, 7};
	int soma = 0;
	
	for(l = 0; l < 6; l++) {
		if(l == 0 || l == 1 || l ==5) {
			soma += A[l];
		}
		
		if(l == 4) {
			A[4] = 100;
		}
	}
	
	printf("A soma dos vetores na posicao 0, 1 e 5 eh: %d\n", soma);
	
	printf("\n");
	for(l = 0; l < 6; l++) {
		printf("Numero da posicao %d: %d\n", l+1, A[l]);
	}
	
	return 0;
}

