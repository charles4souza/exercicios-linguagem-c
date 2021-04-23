#include<stdio.h>

main(){
	float vreal, cot, vconv;
	int op;	
	printf("\n****CONVERSOR DE MOEDAS****");
	printf("\nDigite o valor em reais: ");
	scanf("%f",& vreal);
	printf("Escolha o Pais desejado:");
	printf("\n[1] EUA");
	printf("\n[2] PORTUGAL ");        /*Resolvi colocar alguns printf para facilitar a escolha*/
	printf("\n[3] ARGENTINA "); 
	printf("\n[4] CHILE ");
	printf("\n[5] PERU ");
	printf("\n[6] INGLATERRA ");
	scanf("%d",& op);
	printf("\nDigite a cotacao do dia: ");
	scanf("%f",& cot);  
	vconv = vreal * cot;   /*atribuição de valor para fazer o cálculo da conversão*/ 
	switch(op){
		case 1:
		     printf ("\n PAIS ESCOLHIDO: EUA");
		break;
		case  2:
		     printf ("\n PAIS ESCOLHIDO: PORTUGAL");
		break;
		case  3:
		     printf ("\n PAIS ESCOLHIDO: ARGENTINA");
		break;
		case  4:
		     printf ("\n PAIS ESCOLHIDO: CHILE");
		break;
		case  5:
		     printf ("\n PAIS ESCOLHIDO: PERU");
		break;
		case  6:
		     printf ("\n PAIS ESCOLHIDO: INGLATERRA");
		default:
			printf("\n PAIS INVALIDO");
	}
	printf("\n A conversao de R$%.2f" , vreal); printf(" para a moeda do pais escolhido e de %.2f" , vconv);
}

