#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int somapar( int n )
{

if ((n>1) && !(n% 2)) //Comando seleciona os n�meros pares para realizar o c�lculo solicitado;
return n + somapar(n-1);
if ((n>1) && (n%2))
return somapar(n-1);

return 0;
}


int main(void){
	setlocale(LC_ALL, "Portuguese"); 	
	int a;

	cout << "DIGITE UM N�MERO: "; cin>>a;
	cout << "A SOMA DOS N�MEROS PARES DE 1 AT� "<< a<<" �: " << somapar(a)<< endl;;


return 0;

}
