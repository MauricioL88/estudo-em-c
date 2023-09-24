#include<stdio.h>

float peso = 0.0;
float pergutaPeso();

int main() {
	
	float rPeso;
	
	rPeso = pergutaPeso();
	
	return 0;
}

float pergutaPeso() {
	
	printf("Qual o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("\n\n");
	
	return peso;
}
