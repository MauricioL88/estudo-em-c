/*
	Leia um conjunto de numeros reais, armazenando-o em vetor. Em seguida, calcu-
	le o quadrado de cada elemento desse vetor armazenando esse resultado em outro
	vetor. Os conjuntos tem, no maximo, 20 elementos. Imprima os dois conjuntos
	de numeros.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int l;
	float vet1[5], vet2[5];
	
	for(l = 0; l < 5; l++) {
		printf("Digite um valor:\n");
		scanf("%f",&vet1[l]);
		vet2[l] = pow(vet1[l],2);
	}
	
	printf("\nPrimeiro vetor:\n");
	for(l = 0; l < 5; l++) {
		printf("%.1f\n", vet1[l]);
	}
	
	printf("\nSegundo vetor ao quadrado:\n");
	for(l = 0; l < 5; l++) {
		printf("%.1f\n", vet2[l]);
	}
	printf("\n\n");
			
	return 0;
}
