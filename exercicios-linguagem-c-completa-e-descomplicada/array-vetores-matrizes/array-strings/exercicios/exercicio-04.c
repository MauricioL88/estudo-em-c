/*
	4) Faca um programa que leia uma string e a imprima de tras para a frente.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char str[50];
	int tamanho, i;
	
	printf("Digite uma palavra: ");
	gets(str);
	system("cls");
	
	tamanho = strlen(str);
	for(i=tamanho; i>-1; i--) {
		printf("%c", str[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
