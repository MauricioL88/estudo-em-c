/*
	Fa�a um programa para ler 10 n�meros diferentes a serem armazenados em um
	vetor. Os n�meros dever�o ser armazenados no vetor na ordem em que forem li-
	dos, sendo que, caso o usu�rio digite um n�mero que j� foi digitado anteriormen-
	te, o programa dever� pedir a ele para digitar outro n�mero. Note que cada valor
	digitado pelo usu�rio deve ser pesquisado no vetor, verificando se ele existe entre
	os n�meros que j� foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int l, vet[10], aux;
	
	for(l = 0; l < 10; l++) {
		printf("Digite um numero: ");
		scanf("%d",&vet[l]);
		aux = vet[l];
		system("cls");
		
		if(aux == vet[0]) {
			printf("Numero repitido! Favor digite outro: ");
			scanf("%d",&vet[l]);
			aux = vet[l];
			system("cls");
		} else if(aux == vet[1]) {
			printf("Numero repitido! Favor digite outro: ");
			scanf("%d",&vet[l]);
			aux = vet[l];
			system("cls");
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		} else if(aux == vet[2]) {
			
		}
	}
	
	return 0;
}
