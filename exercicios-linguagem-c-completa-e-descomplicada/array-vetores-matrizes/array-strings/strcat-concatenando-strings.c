#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Concatecnado Strings

int main() {
	
	char str1[15] = "bom ";
	char str2[15] = "dia.";
	
	strcat(str1, str2);
	
	printf("%s\n\n", str1);
	system("pause");
	
	
	return 0;
}
