/*
	Faca um programa que preencha um vetor com 10 numeros reais. Em seguida,
	calcule e mostre na tela a quantidade de numeros negativos e a soma dos numeros
	positivos desse vetor.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float vet[10], soma = 0;
	int l, qtdN;
	
	for(l = 0; l < 10; l++) {
		printf("Digite um valor real: ");
		scanf("%f",&vet[l]);
		
		if(vet[l] >= 0) {
			soma += vet[l];
		} else {
			++qtdN;
		}
	}
	
	printf("\nA soma dos valores positivos: %.2f\n",soma);
	printf("Quantidade de valores negativos: %d\n\n",qtdN);
	
	return 0;
}
