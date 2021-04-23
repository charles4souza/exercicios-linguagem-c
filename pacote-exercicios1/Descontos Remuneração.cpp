#include<stdio.h>
#include<locale.h>
#include<math.h>
float sliqui(float a, float b, float c, float d)  //Função para fazer o cálculo da média; Obs. Aqui optei por usar apenas a função para média.
{
	return a-b-c-d;
}
main(){
	setlocale(LC_ALL,"");;
	int i , cad;
	char cont;
	float sbruto, descvt,descinss, abonof;
	
	printf("\n#############################################");
	printf("\nCONSULTA REMUNERAÇÃO:");
	printf("\nMENU DE OPÇÕES:");
	printf("\n[1] CONSULTAR DESCONTOS [2] SAIR: ");scanf("%d",& cad); //Um pequeno menu que poderia ter outras coisas, só um exemplo...
	
	if (cad == 2)
		printf("Saindo..."); //Caso escolha a opção sair, aparese a mensagem saindo...
	else{
		
	printf("DIGITE O SALÁRIO BRUTO: "); scanf("%f",&sbruto);   //O sistema pede para colocar o valor do salário bruto [Não pode ser valores com vírgulas...  	

		descvt = sbruto * 6/100;
		descinss = sbruto * 11/100;
	 	if (descinss>713.00)
	 	descinss = 713.00;
	 	abonof = sbruto/3;
	 	
	 	//sliqui = sbruto - descvt - descinss + abonof; //O cálculo que foi substituído pela função;
	
		printf("\n#############RESULTADOS###############");
		printf("\nDESCONTO DO VALE TRANSPORTE %.1f", descvt);
		printf("\nDESCONTO DO INSS %.1f", descinss);
		printf("\nABONO FÉRIAS: %.1f", abonof);
		printf("\nSALARIO LIQUIDO: %.1f" , sliqui(sbruto,descvt,descinss,abonof));
	}	
}

