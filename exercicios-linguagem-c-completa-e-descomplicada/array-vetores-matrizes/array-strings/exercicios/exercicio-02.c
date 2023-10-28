/*
	2) Faca um programa que leia uma string e imprima as quatro primeiras letras dela.	
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char str[50];
	
	printf("Digite uma palavra: ");
	gets(str);
	system("cls");
	
	int i;
	printf("As 4 primeiras letras digitadas: ");
	for(i=0; i<4; i++) {
		printf("%c", str[i]);
	}
	printf("\n\n");
	system("pause");
	
	return 0;
}

