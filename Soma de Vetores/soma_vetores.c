#include<stdio.h>
//Autor: Ailton Lima de Andrade
void main(){

	int a [10], b [10], c [10], d [10];//Declaracao dos vetores
	int i;

	for (i=0;i<10;i++){//Leitura dos dados do vetor A
    	printf ("Digite o numero para o indice %d do vetor A: \n",i+1);
		scanf ("%d",&a[i]);   
	}
	printf ("\n");
	
 	for (i=0;i<10;i++){//Leitura dos dados do vetor B
    	printf ("Digite o numero para o indice %d do vetor B: \n",i+1);
		scanf ("%d",&b[i]);   
	}
	printf ("\n");
	
	for  (i=0;i<10;i++){//Somar dados dos vetores A e B e armazenar no vetor C
		c[i]=((a[i])+(b[i]));
	}
	
	for (i=0;i<10;i++){//Imprimir os dados do vetor C  
		printf ("A soma dos valores do indice %d das matrizes A e B eh: %d \n",i ,c[i]);
	}
	printf ("\n");

	for (i=0;i<10;i++){//Armazenar em cada indice a resposta do IF
		if (c[i]>10){//Se for maior que 10 entao o vetor D vai armazenar o resultado do vetor C 
			d[i]=(c[i]);
		}else{
			d[i]=(c[i]*0);//Se for menor que 10 entao o vetor D vai armazenar o resultado 0 
		}
	}
	
	//Imprimir os dados do vetor D
	for (i=0;i<10;i++){
		printf("o valor do indice %d do vetor D eh: %d \n",i ,d[i]);
	}
}
   


