/*
	1) Faca um programa que leia uma string e a imprima na tela.	
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char str[30];
	
	printf("Digite uma palavra: ");
	gets(str);
	system("cls");
	
	printf("Palavra digitada: %s\n\n", str);
	
	system("pause");	
	return 0;
}
