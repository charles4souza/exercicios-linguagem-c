#include<stdio.h>
#include<stdlib.h>
#include<iostream> //Para ativar comandos do c++ como cin e cout
using namespace std;

int nprimo(int num){
	
	int d, p;	//Declara��o de vari�veis		
   
    d = 2;
    p = 1;	

    if (num <= 1)
	p = 0;

    while (p == 1 && d <= num / 2) {
	if (num % d  == 0)
	    p = 0;
	d = d + 1;
    }

    if (p == 1) //retorno da fun��o informando se � verdadeiro ou falso (numero primo)
	cout << "VERDADEIRO - O VALOR DIGITADO � PRIMO"; 
    else
	cout << "FALSO - O VALOR DIGITADO NAO � PRIMO";

    return p;
}
int main(){
	int n;
	char cont[3];
	setlocale(LC_ALL, "Portuguese");
	cout << "DIGITE UM N�MERO: "; cin>> n;
	system("cls");
	nprimo(n);

}

