#include <stdio.h>
//Autor: Ailton Lima de Andrade
void main(){
	float notas[8];
	int i;
	notas[4] = 0;

	//Leitura das notas
	for (i = 0; i <= 3; i++){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &notas[i]);
		notas[4] = (notas[4] + notas[i]);
	}
	
	//Media das notas
	notas[5] = (notas[4] / 4);
	printf("\nSoma das notas: %.2f ", notas[4]);
	printf("\nMedia das notas: %.2f ", notas[5]);

	//Verificar se foi aprovado e leitura da nota de exame
	if (notas[5] >= 7){
		printf("\nAluno aprovado com media: %.2f ", notas[5]);
	}else if (notas[5] < 5){
		printf("\nAluno reprovado!!!");
	}else{
		//Verificar se foi aprovado com a nota do exame
		printf("\nDigite a nota do exame: ");
		scanf("%f", &notas[6]);
		notas[7] = ((notas[5] + notas[6]) / 2);
		if (notas[7] >= 5)
			printf("\nAluno aprovado com media: %.2f ", notas[7]);
		else
			printf("\nAluno reprovado!!!");
	}

}
