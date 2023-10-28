#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Comparando a posicao das Strings, resulta em numeros inteiros (0: igual / qualquer outro: diferente).

int main() {
	
	char str1[100], str2[200];
	
	printf("Entre com uma string: ");
	gets(str1);
	system("cls");
	printf("Entre com outra string: ");
	gets(str2);
	system("cls");
	
	if(strcmp(str1, str2) == 0) {
		printf("Sao Iguais!\n");
	} else {
		printf("Sao Diferentes!\n");
		
	}
	
	system("pause");
	return 0;
}
