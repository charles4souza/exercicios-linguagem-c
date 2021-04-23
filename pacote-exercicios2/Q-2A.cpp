#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
  	int n[10]; // Declarando o vetor com 5 elementos inteiros.
    int maior, menor, j=1, mp,mnp;

    cout << "\n**DIGITE [10] NÚMEROS"<< endl;
    for (int i = 0; i < 10; ++i) {
    	cout << "NÚMERO "<<j<<": " ;cin>>n[i];
    	j++;
    }
    maior = n[1]; 
    menor = n[1];
    for (int i = 0; i < 10; ++i) {
        if (n[i] > maior){
		maior = n[i];
		mp=i+1;
	}else if
     (n[i] < menor){
	 menor = n[i];
    mnp=i+1;		
	}
    }
    cout << "\nNÚMEROS DIGITADOS "<<endl;
	for(int i=0; i<10; i++){
	cout << "{"<< n[i] <<"}";	
}
    cout << "\n\n**"<<endl;
	cout << "MAIOR VETOR - POSIÇÃO "<<mp<<": " << maior;"}";
	cout << "\nMENOR VETOR - POSIÇÃO "<<mnp<<": " << menor;"}";
        
    return 0;
}


