#include<stdio.h>
#include<stdlib.h>

int main() {

    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();

    switch(ch) {
        case '.': printf("\nPonto.\n"); break;
        case ',': printf("\nVirgula.\n"); break;
        case ':': printf("\nDois pontos.\n"); break;
        case ';': printf("\nPonto e virgula.\n"); break;
        default: printf("\nNao e pontoacao.\n");
    }
    system("pause");

    return 0;
}
