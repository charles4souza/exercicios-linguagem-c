#include<stdio.h>
#include<locale.h>
#include<math.h>
float media(float a, int b)  //Fun��o para fazer o c�lculo da m�dia; Obs. Aqui optei por usar apenas a fun��o para m�dia.
{
	return(a/b);
}
main(){
	setlocale(LC_ALL,"");
	int idade, i=0,q=0, quantm=0, quanth=0, ssint, csint, cad, somaidade=0, somasint=0;
	float pcsint,pssint;
	char nome[15];
	char sexo, sint, cont;	
	
	printf("\n#############################################");
	printf("\nPESQUISA SOBRE EFIC�CIA DA VACINA:");
	do{	
	printf("\nIdade: "); scanf("%d",& idade);   

	
	printf("Sexo [M][F]: "); scanf("%s",& sexo);   //resposta somente com letras mai�sculas
		if(sexo=='F') 
			quantm++; 
			else
			  if(sexo=='M') 
			    quanth++;  
		somaidade+=idade;
		q=q+1;
			
		printf("Apresentou sintomas? [S][N]: "); scanf("%s",&sint);	  //resposta somente com letras mai�sculas
		if(sint == 'S')
			csint++; //Aqui se faz a contagem dos que apresentaram sintomas
		else
			if(sint == 'N') 
			ssint++;  //Aqui se faz a contagem dos que n�o apresentaram sintomas
		somasint+=sint;   
		
		pcsint = csint*100/q; //calculo da porcentagem de pessoas com sintomas
		pssint = ssint*100/q; //calculo da porcentagem de pessoas sem sintomas
				
		printf("Deseja continuar? [S][N] "); scanf("%s",&cont); //Aqui resolvi colocar a op��o de continuar ou n�o, caso for escolhida a op��o [N] o programa exibir� os resultados.
		if(cont != 'S')
		break;
	
	}while(i <= 1500);
	
		printf("\n#######RELAT�RIO FINAL DA PESQUISA########");
		printf("\nQUANTIDADE DE HOMENS %d", quanth);
		printf("\nQUANTIDADE DE MULHERES %d", quantm);
		printf("\nM�DIA DE IDADE DOS VOLUNT�RIOS: %.1f", media(somaidade,q));
		printf("\nPORCENTAGEM DE VOLUNT�RIOS QUE APRESENTARAM SINTOMAS: %.1f %%" , pcsint);
		printf("\nPORCENTAGEM DE VOLUNT�RIOS QUE N�O APRESENTARAM SINTOMAS: %.1f %%" , pssint);
		
		if(csint>ssint)
		printf("\nATEN��O: RESULTADO DO TESTE DA VACINA: POSITIVO");
		if(csint<ssint)
		printf("\nATEN��O: RESULTADO DO TESTE DA VACINA: NEGATIVO");
		if(csint == ssint)
		printf("\nATEN��O: RESULTADO DO TESTE DA VACINA: INCONCLUSIVO");
	}	


