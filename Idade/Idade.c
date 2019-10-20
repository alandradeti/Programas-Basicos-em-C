#include <stdio.h>
#include <string.h>
void main(){
	int idade;
	char rg[3];

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if (idade >= 18){
		printf("Entrada Liberada!");
	}else{
		printf("O RG e valido? ");
		scanf("%s", &rg);
		if (strcmp(rg, "sim") == 0){
			printf("Entrada Liberada!");
		}else{
			printf("Entrada Proibida!");
		}
	}
}
