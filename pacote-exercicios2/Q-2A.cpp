#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
  	int n[10]; // Declarando o vetor com 5 elementos inteiros.
    int maior, menor, j=1, mp,mnp;

    cout << "\n**DIGITE [10] N�MEROS"<< endl;
    for (int i = 0; i < 10; ++i) {
    	cout << "N�MERO "<<j<<": " ;cin>>n[i];
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
    cout << "\nN�MEROS DIGITADOS "<<endl;
	for(int i=0; i<10; i++){
	cout << "{"<< n[i] <<"}";	
}
    cout << "\n\n**"<<endl;
	cout << "MAIOR VETOR - POSI��O "<<mp<<": " << maior;"}";
	cout << "\nMENOR VETOR - POSI��O "<<mnp<<": " << menor;"}";
        
    return 0;
}


