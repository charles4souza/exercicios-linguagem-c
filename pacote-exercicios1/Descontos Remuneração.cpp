#include<stdio.h>
#include<locale.h>
#include<math.h>
float sliqui(float a, float b, float c, float d)  //Fun��o para fazer o c�lculo da m�dia; Obs. Aqui optei por usar apenas a fun��o para m�dia.
{
	return a-b-c-d;
}
main(){
	setlocale(LC_ALL,"");;
	int i , cad;
	char cont;
	float sbruto, descvt,descinss, abonof;
	
	printf("\n#############################################");
	printf("\nCONSULTA REMUNERA��O:");
	printf("\nMENU DE OP��ES:");
	printf("\n[1] CONSULTAR DESCONTOS [2] SAIR: ");scanf("%d",& cad); //Um pequeno menu que poderia ter outras coisas, s� um exemplo...
	
	if (cad == 2)
		printf("Saindo..."); //Caso escolha a op��o sair, aparese a mensagem saindo...
	else{
		
	printf("DIGITE O SAL�RIO BRUTO: "); scanf("%f",&sbruto);   //O sistema pede para colocar o valor do sal�rio bruto [N�o pode ser valores com v�rgulas...  	

		descvt = sbruto * 6/100;
		descinss = sbruto * 11/100;
	 	if (descinss>713.00)
	 	descinss = 713.00;
	 	abonof = sbruto/3;
	 	
	 	//sliqui = sbruto - descvt - descinss + abonof; //O c�lculo que foi substitu�do pela fun��o;
	
		printf("\n#############RESULTADOS###############");
		printf("\nDESCONTO DO VALE TRANSPORTE %.1f", descvt);
		printf("\nDESCONTO DO INSS %.1f", descinss);
		printf("\nABONO F�RIAS: %.1f", abonof);
		printf("\nSALARIO LIQUIDO: %.1f" , sliqui(sbruto,descvt,descinss,abonof));
	}	
}

