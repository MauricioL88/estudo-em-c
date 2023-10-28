#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
	
int main() {
	
	
	char nome[] = {"Mauricio Lisboa"};
	int tamanho;
	
	//Descobrindo o tamanho da string, essa funcao so contabiliza a quantidade de caracteres antes do "\0".	
	tamanho = strlen(nome) - 1;
	printf("Tamanho da String: %d\n\n",tamanho);
	system("pause");
	system("cls");
	
	return 0;
}
