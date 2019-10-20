#include <stdio.h>
//Autor: Ailton Lima de Andrade
void main(){
	float aluno[10][7];
	int i, j, m, d, a, b;

	//Leitura das notas
	for (i = 0; i < 10; i++){
		for (j = 0; j < 4; j++){

			printf("\nDigite a %d nota do aluno %d: ", j + 1, i + 1);
			scanf("%f", &aluno[i][j]);
		}
		//Soma das 4 notas do aluno
		aluno[i][4] = (aluno[i][0] + aluno[i][1] + aluno[i][2] + aluno[i][3]);
	}
	
	//Media das 4 notas do aluno
	for (m = 0; m < 10; m++){
		aluno[m][5] = (aluno[m][4] / 4);
	}

	//Verificacao das notas se aprovado (1) se reprovado (3) ou em exame
	for (a = 0; a <= 9; a++){
		if (aluno[a][5] >= 7){
			aluno[a][6] = 1;
		}else if (aluno[a][5] < 5){
			aluno[a][6] = 3;
		}else{
			//Verificacao da nota do aluno em exame se aprovado (1) se reprovado (3)
			printf("\nDigite a nota do exame do %d aluno: ", a + 1);
			scanf("%f", &aluno[a][7]);
			aluno[a][8] = (aluno[a][6] + aluno[a][7]) / 2;
			if (aluno[a][8] >= 5){
				aluno[a][6] = 1;
			}else{
				aluno[a][6] = 3;
			}
		}
	}

	//Alunos aprovados ou reprovados
	for (i = 0; i <= 9; i++){
		printf("\n");
		printf("\n aluno %d: %.2f", i + 1, aluno[i][6]);
	}
}
