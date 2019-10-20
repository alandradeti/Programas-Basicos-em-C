#include<stdio.h>
//Autor: Ailton Lima de Andrade
void main(){
	int max, pessoas, idade, fidade, resp, resp2;
	float pvd, pva, pvn, pvdfavor, pvdcontra, pvdsop, pvafavor, pvacontra, pvasop, pvnfavor, pvncontra, pvnsop;
	max=9;
	
	//Realiza a leitura dos votos
	for(pessoas=1; pessoas<=max; pessoas++){
		printf("\nDigite sua idade: ");
		scanf("%d",&idade);
		//Verifica se a eleitor é maior de idade ou não
		if((idade>=18)&&(idade<=62)){
			printf("Digite 1 se votou na Claudia, 2 no Jorge ou 3 para nenhum deles: ");
			scanf("%d",&resp);
			if(resp==1){
				pvd=(pvd+1);
				printf("Digite 1 se e a favor do impeachment, 2 contra e 3 se nao tem opiniao formada:");
				scanf("%d",&resp2);
				if(resp2==1){
					pvdfavor=(pvdfavor+1);
				}else if(resp2==2){
					pvdcontra=(pvdcontra+1);
				}else{
					pvdsop=(pvdsop+1);
				}
			}else if(resp==2){
				pva=(pva+1);
				printf("Digite 1 se e a favor do impeachment, 2 contra e 3 se nao tem opiniao formada:");
				scanf("%d",&resp2);
				if(resp2==1){
					pvafavor=(pvafavor+1);
				}else if(resp2==2){
					pvacontra=(pvacontra+1);
				}else{
					pvasop=(pvasop+1);
				}
			}else{
				pvn=(pvn+1);
				printf("Digite 1 se e a favor do impeachment, 2 contra e 3 se nao tem opiniao formada:");
				scanf("%d",&resp2);
				if(resp2==1){
					pvnfavor=(pvnfavor+1);
				}else if(resp2==2){
					pvncontra=(pvncontra+1);
				}else{
					pvnsop=(pvnsop+1);
				}
			}
		}else{
			max=max+1;
			fidade=(fidade+1);
			printf("Menor de Idade nao pode votar!\n");
		}
	}
	
	//Apresenta os dados da votacao
	printf("\nPercentual de pessoas que votaram na Claudia %.1f%%.", pvd/9*100);
	printf("\nPercentual de pessoas que votaram na Claudia e sao a favor do impeachment %.1f%%.", pvdfavor/pvd*100);
	printf("\nPercentual de pessoas que votaram na Claudia e sao contra o impeachment %.1f%%.", pvdcontra/pvd*100);
	printf("\nPercentual de pessoas que votaram na Claudia e nao tem opinião formada sobre o impeachment %.1f%%.", pvdsop/pvd*100);
	printf("\n");
	printf("\nPercentual de pessoas que votaram no Jorge %.1f%%.", pva/9*100);
	printf("\nPercentual de pessoas que votaram no Jorge e sao a favor do impeachment %.1f%%.", pvafavor/pva*100);
	printf("\nPercentual de pessoas que votaram no Jorge e sao contra o impeachment %.1f%%.", pvacontra/pva*100);
	printf("\nPercentual de pessoas que votaram no Jorge e nao tem opiniao formada sobre o impeachment %.1f%%.", pvasop/pva*100);
	printf("\n");
	printf("\nPercentual de pessoas que nao votaram em nenhum deles %.1f%%.", pvn/9*100);
	printf("\nPercentual de pessoas que nao votaram em nenhum deles e sao a favor do impeachment %.1f%%.", pvnfavor/pvn*100);
	printf("\nPercentual de pessoas que nao votaram em nenhum deles e sao contra o impeachment %.1f%%.", pvncontra/pvn*100);
	printf("\nPercentual de pessoas que nao votaram em nenhum deles e nao tem opiniao formada sobre o impeachment %.1f%%.", pvnsop/pvn*100);
	printf("\n");
	printf("\n%d pessoas foram consultadas, mas estão fora da faixa etária!", fidade);
}
