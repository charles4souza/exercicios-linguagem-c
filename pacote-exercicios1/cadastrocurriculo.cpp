#include<stdio.h>
#include<locale.h>

main(){
	int i, anoatual, anoniver, idade, anotrab, texp;
	char dviagem, ningles;
	setlocale(LC_ALL,"");
	
	for(i=1;i<=50;i++) { 
	printf(""); 
	printf("\n_____________________________________");
	printf("\n\n------CADASTRO DE CURRICULOS %d-------", i);
	printf("\nDigite o ano atual: ");
	scanf("%d",&anoatual);
	
	printf("Digite seu ano de Nascimento: ");
	scanf("%d",&anoniver);
	idade = anoatual-anoniver; /*calculo da idade pela referência dos anos informados*/
	
	printf("Em que ano começou a trabalhar na área: ");
	scanf("%d",&anotrab);
	texp = anoatual-anotrab; /*tempo de experiência*/
	
	printf("\nEscolha a opção que corresponde ao seu nível de inglês: ");
	printf("\n[A] Avançado [I] Intermediário [B] Básico: "); /* somente resposta com letra maiúscula*/
	scanf("%s",&ningles);
	if(ningles == 'A'){
		printf("NÍVEL AVANÇADO");
	}
	if(ningles == 'I'){
		printf("NÍVEL INTERMEDIÁRIO");	
	}
	if(ningles == 'B'){
		printf("NÍVEL BÁSICO");
	}		
	printf("\n\nPossui disponibilidade para viajar?[S][N]: "); /* somente resposta com letra maiúscula*/
	scanf("%s",&dviagem);
	if(dviagem == 'S'){
		printf("SIM, POSSUO");
	}
	if(dviagem == 'N'){
		printf("NÃO POSSUO");	
	}
	printf("\n");
    printf("\nRESULTADO:");
	printf("\nIDADE: %d", idade);printf(" ANOS");
	printf("\nNÍVEL DE INGLÊS: %c ", ningles); /*Não consegui entender porque no char tive que colocar c e não s*/
	printf("\nTEMPO DE EXPERIÊNCIA: %d ", texp);printf("ANOS");
	printf("\nDISPONIBILIDADE PARA VIAGENS: %c", dviagem);
	
	if(texp >=5 && idade>=35){
		printf("\n****ATENÇÃO****");
		printf("\nCADIDADATO APTO PARA A PRÓXIMA FASE");
	
	}else{
		printf("\n****ATENÇÃO****");
		printf("\nCANDIDATO NÃO APTO PARA PROXIMA FASE");
	}
}
return 0;
}

