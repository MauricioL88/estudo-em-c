/*
	Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
	iguais e os escreva na tela.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vet[10], aux = 0;
	
	for(l = 0; l < 10; l++) {
		printf("Digite um numero: ");
		scanf("%d",&vet[l]);
		system("cls");		
	}
	
	for(l = 0; l< 10; l++) {
		if(vet[l] == aux) {
			printf("Numero repetido: %d\n",vet[l]);
			aux = vet[l];			
		} else {
			aux = vet[l];
		}
	}
	
	return 0;
}
