#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //Prot�tipo da fun��o
int main ()
{
	setlocale(LC_ALL,"");
	escrevaNome();
	escrevaNome();
	escrevaNome();
	escrevaNome();
	escrevaNome();
	return 0;
}

void escrevaNome(){
	printf("Bem vindo � Boson Treinamentos em Tecnologia\n");
	return 0;
}
