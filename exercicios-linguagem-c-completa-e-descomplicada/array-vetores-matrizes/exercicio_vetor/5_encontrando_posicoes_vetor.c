/*
	Faca um programa que leia um vetor de oito posicoes. Em seguida, leia tambem dois
	valores X e Y quaisquer correspondentes a duas posicoes no vetor. Seu programa
	devera exibir a soma dos valores encontrados nas respectivas posicoes X e Y.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int vet[8], l, x, y, soma = 0;
	
	printf("Digite dois valores de 1 a 8:\n");
	scanf("%d""%d",&x,&y);
	
	printf("\n");
	for(l = 0; l < 8; l++) {
		printf("Digite qualquer valor inteiro na posicao %d: ", l);
		scanf("%d",&vet[l]);
		
		if(l == (x-1) || l == (y-1)) {
			soma += vet[l];
		}
	}
	
	printf("\n\nValor da posicao do vetor com valor de X: %d",vet[x-1]);
	printf("\nValor da posicao do vetor com valor de Y: %d",vet[y-1]);
	printf("\nA soma dos valores do vetor: %d\n\n",soma);
	
	return 0;
}

