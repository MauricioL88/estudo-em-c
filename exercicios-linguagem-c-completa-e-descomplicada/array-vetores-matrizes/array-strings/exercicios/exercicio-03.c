/*
	3) Sem usar a funcao strlen(), faca um programa que leia uma string e imprima
	quantos caracteres ela possui.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	int cont = 0;
	int i, tamanho;
	char str[50];
	
	printf("Digite uma palavra: ");
	gets(str);
	system("cls");
	
	i = 0;
	while(str[i] != '\0') {		
		i++;
		cont++;
	}
	
	printf("Quantidade de caracteres digitados: %d\n\n", cont);
	system("pause");
	
	return 0;
}
