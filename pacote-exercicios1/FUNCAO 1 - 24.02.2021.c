#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //Protótipo da função
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
	printf("Bem vindo à Boson Treinamentos em Tecnologia\n");
	return 0;
}
