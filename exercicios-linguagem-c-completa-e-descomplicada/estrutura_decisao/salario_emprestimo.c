/*
	4) Faca um programa que leia o salario de um trabalhador e o valor da prestacao de
		um emprestimo.
		
		Se a prestacao:		
		For maior que 20% do salario, imprima: "Emprestimo nao concedido."
		Caso contrario, imprima: "Emprestimo concedido."

*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float porcsal, salario, emp, vlrparc;
	int parc;
	
	printf("Informe o seu salario: R$ ");
	scanf("%f",&salario);
	printf("Informe o valor do emprestimo: R$ ");
	scanf("%f",&emp);
	printf("Informe a quantidade de parcelas que deseja: ");	
	scanf("%d",&parc);
	
	vlrparc = emp / parc;
	porcsal = salario * 0.2;
	
	if(vlrparc > porcsal) {
		printf("\nEmprestimo nao concedido!\nValor da parcela: R$ %.2f reais.\nVinte porcento da sua renda: R$ %.2f reais.\n\n",vlrparc, porcsal);
	}else {
		printf("\nEmprestimo concedido!\nValor da parcela: R$ %.2f reais.\nVinte porcento da sua renda: R$ %.2f reais.\n\n",vlrparc, porcsal);
	}
		
	return 0;
}
