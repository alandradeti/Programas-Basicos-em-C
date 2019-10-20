#include <stdio.h>
//Autor: Ailton Lima de Andrade.
int main(){
	int num;

	printf("\nDigite um numero: ");
	scanf("%d", &num);

	//Verificar se o numero e par ou impar
	if (num % 2 == 0)
		printf("Par");
	else
		printf("Impar");
}
