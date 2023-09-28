/*
	1) Faca um programa que leia dois numeros e mostre qual deles e o maior.
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
	}else {
		maior = n2;
		printf("\nMaior numero digitado: %d.\n", maior);
	}
	
	return 0;
}
