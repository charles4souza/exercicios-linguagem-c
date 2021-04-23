#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int somapar( int n )
{

if ((n>1) && !(n% 2)) //Comando seleciona os números pares para realizar o cálculo solicitado;
return n + somapar(n-1);
if ((n>1) && (n%2))
return somapar(n-1);

return 0;
}


int main(void){
	setlocale(LC_ALL, "Portuguese"); 	
	int a;

	cout << "DIGITE UM NÚMERO: "; cin>>a;
	cout << "A SOMA DOS NÚMEROS PARES DE 1 ATÉ "<< a<<" é: " << somapar(a)<< endl;;


return 0;

}
