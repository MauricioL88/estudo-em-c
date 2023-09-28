/*
	2) Faca um programa que leia dois numeros e mostre o maior deles. Se, por acaso, os dois numeros forem iguais, imprima mensagem "Numeros Iguais".
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int n1, n2, maior;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2) {
		maior = n1;
		printf("\nMaior numero digitado: %d.\n", maior);
	}else if(n1 < n2) {
		maior = n2;
		printf("\nMaior numero digitado: %d.\n", maior);
	}else {
		printf("\nOs numeros sao iguais!\n");
	}
	
	return 0;
}
