#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream> 
using namespace std;

main(){
	
int i=0,j,k=0;
float notas[5][5],soma,maiorNf,sNf,aux;
setlocale(LC_ALL, "Portuguese");

for (int i=0; i<=4;i++){ 	
  k++;
  cout<<"=========================";  
  cout<<"\n ALUNO " << k << endl;
  cout<<"MATRÍCULA: ";
  cin>> notas[i][j];
  j++;
  cout<<"NOTA AV1: ";
  cin>> notas[i][j];
  soma+=notas[i][j];
  j++;
  cout<<"NOTA AV2: ";
  cin>> notas[i][j];
  soma+=notas[i][j];
  j++;
  cout<<"MÉDIA : ";
  cin>> notas[i][j];
  soma+=notas[i][j];
  notas[i][4]=soma/3;
  sNf+=notas[i][4];
  soma=0;  
  j=0;
  if (notas[i][4]>=aux)
    {
	aux=notas[i][4];
    maiorNf=notas[i][j];	
    }
	  
  if(k==5)
  {
  cout<<"\n A matrícula do aluno com a maior nota final é: "<< maiorNf <<endl; 
  cout<<"\n A média das notas finais é: " << sNf/5 <<endl;  	   	
  }
  
}
}
