#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
float midade(int a, int b) //Optei por usar duas funções, uma para cálculo da média e a outra da porcentagem, espero estar correto!rs
{
	return(a/b);
}
float porcredes(int a, int b, int c)   
{
	return(a*b)/c;
}
main()
{
	setlocale(LC_ALL,"");
	char curso[50];
	char disc[50];
	char difdisc[50];
	int idade ,q=0,q1=0, q2=0, q3=0,somaidade=0, somacurso=0;
	
	printf("\n********************************************");
	printf("\nPESQUISA ENTRE OS ESTUDANTES DA UNICARIOCA"); 
	printf("\n\n********************************************");
	printf("\nIDADE: "); scanf("%d",&idade);
	
	while(idade > 0)  
	{
	  	printf("CURSO:"); scanf("%s",&curso);  //Resposta somente em letras maiúsculas
		q=q+1;
		
		if((strcmp(curso,"INFORMATICA")==0)){  //Aqui a função strcmp ajuda a fazer a contagem dos alunos de informática
			
		q1=q1+1;
		somaidade = somaidade + idade;
		
		}else{
			
		if((strcmp(curso,"REDES")==0))  //Aqui a função strcmp ajuda a fazer a contagem dos alunos do curso de redes
	    somacurso++;
				
		}
		
		printf("DISCIPLINA QUE O ALUNO(A) MAIS GOSTOU NO SEMESTRE:"); scanf("%s",&disc);   //Resposta somente em letras maiúsculas
		printf("DISCIPLINA QUE O ALUNO(A) MAIS TEVE DIFICULDADE:"); scanf("%s",&difdisc); //Resposta somente em letras maiúsculas
      	printf("\nIDADE: "); scanf("%d",&idade);
	
	
		if((strcmp(disc,"ALGORITMOS")==0))
		q2=q2+1;
		
	  	if((strcmp(difdisc,"ALGORITMOS")==0))
	    q3=q3+1;
	      	  					
	}
		/*porcredes=somacurso*100/q;*/  //Aqui foram os cálculos que substitui por funções
		/*midade = somaidade/q1;*/

	printf("\n*******************RESULTADOS***********************");
	printf("\n QUANTIDADE DE ALUNOS ENTREVISTADOS = %d ",q);
    printf("\n MÉDIA DE IDADE DOS ALUNOS DE INFORMÁTICA: %.1f ",midade(somaidade,q1));
    printf("\n QUANTIDADE DE ALUNOS QUE GOSTARAM MAIS DE ALGORITMOS NO SEMESTRE: %d ", q2);
    printf("\n QUANTIDADE DE ALUNOS QUE TIVERAM MAIS DIFICULDADE EM ALGORITMOS NO SEMESTRE: %d ",q3);
    printf("\n PORCENTAGEM DE ALUNOS DO CURSO DE REDES:  %.1f %% ", porcredes(somacurso,100,q));

    return 0;
}
