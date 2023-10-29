/*
    10) Escreva um programa que leia uma string do teclado e converta todos os seus
    caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
    entre 97 e 122.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt-BR");
    
    char minhaString[100];

    printf("Digite uma string: ");
    gets(minhaString); // Leitura da string

    int i;
    for (i = 0; minhaString[i] != '\0'; i++)
    {
        if (minhaString[i] >= 'a' && minhaString[i] <= 'z')
        {
            // Verifique se o caractere é uma letra minúscula
            // Se for, converta para maiúscula subtraindo 32
            minhaString[i] = minhaString[i] - 32;
        }
    }

    printf("String convertida em maiúsculas: %s\n", minhaString);

    return 0;
}
