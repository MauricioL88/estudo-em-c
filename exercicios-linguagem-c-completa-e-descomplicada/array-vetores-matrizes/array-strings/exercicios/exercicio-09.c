/*
    9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
    informando quantas vezes a segunda string lida está contida dentro da primeira.

*/

#include <stdio.h>
#include <string.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL, "pt-BR");

    char primeiraString[100];
    char segundaString[100];

    printf("Digite a primeira string: ");
    gets(primeiraString); // Leitura da primeira string

    printf("Digite a segunda string: ");
    gets(segundaString); // Leitura da segunda string

    int count = 0;
    char *p = primeiraString;

    while ((p = strstr(p, segundaString)) != NULL)
    {
        count++;
        p++;
    }

    if (count > 0)
    {
        printf("A segunda string foi encontrada %d vezes na primeira.\n", count);
    }
    else
    {
        printf("A segunda string não foi encontrada na primeira.\n");
    }

    return 0;
}