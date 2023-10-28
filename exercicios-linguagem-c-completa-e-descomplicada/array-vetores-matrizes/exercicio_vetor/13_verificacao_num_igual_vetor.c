/*
	Faça um programa para ler 10 números diferentes a serem armazenados em um
	vetor. Os números deverão ser armazenados no vetor na ordem em que forem li-
	dos, sendo que, caso o usuário digite um número que já foi digitado anteriormen-
	te, o programa deverá pedir a ele para digitar outro número. Note que cada valor
	digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
	os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
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
