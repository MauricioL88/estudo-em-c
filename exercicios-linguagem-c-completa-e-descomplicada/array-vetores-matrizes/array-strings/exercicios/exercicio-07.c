/*
	7) Faca um programa que leia uma string e imprima uma mensagem dizendo se ela
	e um palindromo ou nao. Um palindromo e uma palavra que tem a propriedade
	de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
	Exemplos: ovo, arara, rever, asa, osso etc.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char txt1[20];
	int i, tamanho = 0;
	
	printf("Digite uma palavra: ");
		gets(txt1);
		system("cls");
		
		tamanho = strlen(txt1) - 1;
		char txt2[tamanho];
		
		for(i=0; txt1[i]!='\0'; i++) {
			txt2[tamanho - i] = txt1[i];
		}
		
		if(strcmp(txt1, txt2) == 0) {
			printf("%s e um palindromo!\n\n", txt1);
			system("pause");
			system("cls");		
		} else {
			printf("%s nao e um palindromo!\n\n", txt1);
			system("pause");
			system("cls");
		}	
			
	return 0;
}
