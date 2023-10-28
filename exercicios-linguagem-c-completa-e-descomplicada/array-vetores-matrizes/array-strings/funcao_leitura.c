#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char nome[30];
	
	printf("Digite o seu nome: ");	
	// scanf() = armazena palavras ate o caractere vazio;
	// gets() = armazena palavras com o caractere vazio ate o comando "enter" (\0);
	// fgets() = gets melhorado armazenando o comando "enter" (\0\n);
	fgets(nome, 30, stdin);
	system("cls");
			
	printf("Nome digitado: ");
	fputs(nome, stdout);
	printf("\n");
	system("pause");
	
	return 0;
}
