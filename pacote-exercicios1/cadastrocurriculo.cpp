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
	idade = anoatual-anoniver; /*calculo da idade pela refer�ncia dos anos informados*/
	
	printf("Em que ano come�ou a trabalhar na �rea: ");
	scanf("%d",&anotrab);
	texp = anoatual-anotrab; /*tempo de experi�ncia*/
	
	printf("\nEscolha a op��o que corresponde ao seu n�vel de ingl�s: ");
	printf("\n[A] Avan�ado [I] Intermedi�rio [B] B�sico: "); /* somente resposta com letra mai�scula*/
	scanf("%s",&ningles);
	if(ningles == 'A'){
		printf("N�VEL AVAN�ADO");
	}
	if(ningles == 'I'){
		printf("N�VEL INTERMEDI�RIO");	
	}
	if(ningles == 'B'){
		printf("N�VEL B�SICO");
	}		
	printf("\n\nPossui disponibilidade para viajar?[S][N]: "); /* somente resposta com letra mai�scula*/
	scanf("%s",&dviagem);
	if(dviagem == 'S'){
		printf("SIM, POSSUO");
	}
	if(dviagem == 'N'){
		printf("N�O POSSUO");	
	}
	printf("\n");
    printf("\nRESULTADO:");
	printf("\nIDADE: %d", idade);printf(" ANOS");
	printf("\nN�VEL DE INGL�S: %c ", ningles); /*N�o consegui entender porque no char tive que colocar c e n�o s*/
	printf("\nTEMPO DE EXPERI�NCIA: %d ", texp);printf("ANOS");
	printf("\nDISPONIBILIDADE PARA VIAGENS: %c", dviagem);
	
	if(texp >=5 && idade>=35){
		printf("\n****ATEN��O****");
		printf("\nCADIDADATO APTO PARA A PR�XIMA FASE");
	
	}else{
		printf("\n****ATEN��O****");
		printf("\nCANDIDATO N�O APTO PARA PROXIMA FASE");
	}
}
return 0;
}

