#include <stdio.h>
//Autor: Ailton Lima de Andrade.
void main(){
	float salario, novo_salario;

	printf("\nDigite o salario: R$");
	scanf("%f", &salario);

	//Realizar o reajuste do salario
	if (salario < 500){
		novo_salario = (salario + (salario * 0.15));
	}else if (salario < 1000){
		novo_salario = (salario + (salario * 0.10));
	}else{
		novo_salario = (salario + (salario * 0.05));
	}

	printf("\nO novo salario e de: R$%.2f", novo_salario);
}
