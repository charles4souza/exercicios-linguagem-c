#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int matriz[3][3];
    setlocale(LC_ALL, "Portuguese"); 
    
    cout<<"Digite os números da matriz 3x3: " << endl;
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
			cin >> matriz[x][y];
        }  
    }
    int soma;
    int resultado[3];

    for(int x = 0; x < 3; x++){
        soma = 0;
        for(int y = 0; y < 3; y++){
            soma += matriz[y][x];
        }
        resultado[x] = soma;
    }
    
    cout<<"{";
	for(int x = 0; x < 3; x++){
		cout<< resultado[x]; 
		cout<<",";
    }
    cout<<"}";
    return 0;
}
