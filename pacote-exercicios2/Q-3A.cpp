#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream> 
using namespace std;

int main() {
	
	float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j;
	setlocale(LC_ALL, "Portuguese");
	
	cout<< "\n O endere�o de cada posi��o na matriz 3x3 �: " << endl;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
			cout << &matriz[i][j] << endl;
	}	

	cout << &matriz[i][j] << endl;
	
	return 0;
}
