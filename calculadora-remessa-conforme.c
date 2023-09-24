#include<stdio.h>
#include<stdlib.h>

int main() {
	
	float taxa, vlrConv, vlrProd;
	
	printf("Digite o valor do item em reais: R$ ");
	scanf("%f",&vlrProd);
	
	vlrConv = vlrProd / 5.00;
	
	if(vlrConv >= 50.01) {
		taxa = (vlrProd * 1.60) / 0.83;
		printf("\nValor da compra: U$ %.2f dolares.\n", vlrConv);
		printf("Valor acima de U$ 50,00 dolares | Taxa: 60 + 17 porcento (Efetivo = 93%).\n");
		printf("Valor final: R$ %.2f reais.\n\n", taxa);
	}else {
		taxa = vlrProd / 0.83;
		printf("\nValor da compra: U$ %.2f dolares.\n", vlrConv);
		printf("Valor abaixo de U$ 50,00 dolares | Taxa: 17 porcento.\n");
		printf("Valor final: R$ %.2f reais.\n\n", taxa);
	}
	
	system("pause");
	return 0;
}
