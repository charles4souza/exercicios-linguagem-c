#include<stdio.h>
#include<locale.h>
#include<math.h>
float media(float a, int b)  //Função para fazer o cálculo da média; Obs. Aqui optei por usar apenas a função para média.
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
	printf("\nPESQUISA SOBRE EFICÁCIA DA VACINA:");
	do{	
	printf("\nIdade: "); scanf("%d",& idade);   

	
	printf("Sexo [M][F]: "); scanf("%s",& sexo);   //resposta somente com letras maiúsculas
		if(sexo=='F') 
			quantm++; 
			else
			  if(sexo=='M') 
			    quanth++;  
		somaidade+=idade;
		q=q+1;
			
		printf("Apresentou sintomas? [S][N]: "); scanf("%s",&sint);	  //resposta somente com letras maiúsculas
		if(sint == 'S')
			csint++; //Aqui se faz a contagem dos que apresentaram sintomas
		else
			if(sint == 'N') 
			ssint++;  //Aqui se faz a contagem dos que não apresentaram sintomas
		somasint+=sint;   
		
		pcsint = csint*100/q; //calculo da porcentagem de pessoas com sintomas
		pssint = ssint*100/q; //calculo da porcentagem de pessoas sem sintomas
				
		printf("Deseja continuar? [S][N] "); scanf("%s",&cont); //Aqui resolvi colocar a opção de continuar ou não, caso for escolhida a opção [N] o programa exibirá os resultados.
		if(cont != 'S')
		break;
	
	}while(i <= 1500);
	
		printf("\n#######RELATÓRIO FINAL DA PESQUISA########");
		printf("\nQUANTIDADE DE HOMENS %d", quanth);
		printf("\nQUANTIDADE DE MULHERES %d", quantm);
		printf("\nMÉDIA DE IDADE DOS VOLUNTÁRIOS: %.1f", media(somaidade,q));
		printf("\nPORCENTAGEM DE VOLUNTÁRIOS QUE APRESENTARAM SINTOMAS: %.1f %%" , pcsint);
		printf("\nPORCENTAGEM DE VOLUNTÁRIOS QUE NÃO APRESENTARAM SINTOMAS: %.1f %%" , pssint);
		
		if(csint>ssint)
		printf("\nATENÇÃO: RESULTADO DO TESTE DA VACINA: POSITIVO");
		if(csint<ssint)
		printf("\nATENÇÃO: RESULTADO DO TESTE DA VACINA: NEGATIVO");
		if(csint == ssint)
		printf("\nATENÇÃO: RESULTADO DO TESTE DA VACINA: INCONCLUSIVO");
	}	


