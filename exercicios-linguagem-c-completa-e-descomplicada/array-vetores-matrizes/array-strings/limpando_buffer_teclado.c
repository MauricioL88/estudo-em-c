#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char str[30];
	
	// Limpar o buffer do teclado para evitar erro ao capiturar a String digitada.
	setbuf(stdin, NULL);
	gets(str);
	system("cls");
	
	return 0;
}
