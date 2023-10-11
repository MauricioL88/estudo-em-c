/*
	Faca um programa que leia cinco valores e os armazene em um vetor. Em seguida,
	mostre todos os valores lidos juntamente com a media dos valores.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int vlr[5], l, qtd = 0;
	int soma = 0;
	float media;
		
	for(l = 0; l < 5; l++) {
		printf("Digite um valor inteiro: ");
		scanf("%d",&vlr[l]);
		soma += vlr[l];
		++qtd;
	}
	
	printf("\n");
	for(l = 0; l < 5; l++) {
		printf("Numero %d digitado: %d\n", l+1, vlr[l]);
	}
	
	printf("\nQuantidade de numeros digitados: %d\n",qtd);
	media = soma / qtd;
	printf("Soma dos valores: %d\nMedia dos valores: %.2f\n\n",soma, media);
	
	return 0;
}
