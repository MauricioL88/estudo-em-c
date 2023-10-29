/*
	8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
    informando se a segunda string lida está contida dentro da primeira.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

    setlocale(LC_ALL,"pt-BR");
    
    char primeiraString[100];
    char segundaString[100];

    printf("Digite a primeira string: ");
    gets(primeiraString);  // Leitura da primeira string

    printf("Digite a segunda string: ");
    gets(segundaString);  // Leitura da segunda string

    if (strstr(primeiraString, segundaString) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string não está contida na primeira.\n");
    }

    return 0;
}
