/*
	6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
	com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada
	por esse caractere. Ao final, imprima a nova string e o numero de vogais que ela
	possui.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
			
	char str1[50], caracter;
	int i, cont = 0;
	
	printf("Digite uma palavra: ");
	fgets(str1, sizeof(str1), stdin);
	system("cls");
	
	printf("Digite uma letra para substituir as vogais: ");
	scanf("%c",&caracter);
	system("cls");
		
	for(i=0; str1[i]!='\0'; i++) {
		char caractere = str1[i];
		if((str1[i] == 'a') || (str1[i] == 'e') || (str1[i] == 'i') || (str1[i] == 'o') || (str1[i] == 'u')) {
			cont++;
			str1[i] = caracter;
		}
	}
	
	printf("A palavra digitada tem %d vogais.\n\n", cont);
	system("pause");
	system("cls");
	
	printf("Nova palavra: %s\n\n", str1);
	system("pause");
	system("cls");
	
	return 0;
}
