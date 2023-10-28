/*
	5) Faca um programa que leia uma string e a inverta. A string invertida deve ser
	armazenada na mesma variavel. Em seguida, imprima a string invertida.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char str1[50], str2[50];
	int tamanho, i;
	
	printf("Digite uma palavra: ");
	gets(str1);
	system("cls");
	
	tamanho = strlen(str1) -1;	
	printf("Tamanho: %d\n\n", tamanho);
	system("pause");
	system("cls");
	
	for(i=0; str1[i]!='\0'; i++) {
		str2[tamanho - i] = str1[i];
	}
	
	strcpy(str1, str2);
	
	printf("Palavra invertida: ");
	fputs(str1, stdout);
	printf("\n\n");
	system("pause");
	return 0;
}
