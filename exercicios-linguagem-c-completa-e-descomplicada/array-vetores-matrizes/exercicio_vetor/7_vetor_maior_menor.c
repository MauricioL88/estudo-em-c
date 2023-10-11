/*
	Faca um programa que receba do usuario um vetor X com 10 posicoes. Em segui-
	da deverao ser impressos o maior e o menor elemento desse vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vet[10], aux, maior = 0;
	int menor = 0;
	
	for(l = 0; l < 10; l++) {
		printf("Digite o valor numero %d: ", l+1);
		scanf("%d",&vet[l]);
		aux = vet[l];
		
		if(vet[l] > maior) {
			maior = vet[l];
		} else if(aux <= menor && vet[l] < maior) {
			menor = vet[l];
		}
	}
	
	printf("\nMaior valor digitado: %d\n",maior);
	printf("Menor valor digitado: %d\n\n",menor);
	
	return 0;
}
