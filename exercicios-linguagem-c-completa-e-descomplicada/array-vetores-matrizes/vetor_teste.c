#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char nome[] = "Mauricio";
	
	int i;
	for(i = 0; i < sizeof(nome); i++) {
		printf("%c", nome[i]);
	}
	printf("\n");
	
	return 0;
}
