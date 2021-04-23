#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	char gabarito [10];
	char resp[10];
	int aluno, i=0, pt=0, n=1;
	
	cout <<"\n****SISTEMA DE CORREÇÃO DE PROVAS******"<< endl;
	cout <<"\nINSIRA A QUANTIDADE DE ALUNOS: "; cin>>n;
	cout <<"\nDIGITE O GABARITO"<< endl; //Questões com 5 alternativas [A,B,C,D,E]
	for(int i=1; i<=10; i++){
	cout << "QUESTÃO "<<i<<": " ;cin>>gabarito[i];
}
	system("cls");
	cout <<"\n\n********************"<< endl;
	for (aluno = 1; aluno <= n; aluno++) {
    
	
	
	pt = 0;
	cout <<"\nDIGITE AS RESPOSTAS DO ALUNO "<<aluno<<": "<<endl;
    for (i = 1; i <=10; i++) {
	cout << "QUESTÃO "<<i<<": " ;cin>>resp[i];	
	if (resp[i] == gabarito[i])
	pt ++;





}
    cout <<"\n****RESULTADO******"<< endl;
    cout << "\nNUMERO DE ACERTOS "<<pt;
    
    if(pt>=7){
    cout <<"\nALUNO APROVADO"<< endl;	
	}else{
		cout <<"\nALUNO REPROVADO"<< endl;
	}
}
return 0;
}    


