#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream> 
using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float x,aux,n[10];
	int i;
	cout << "\n*DIGITE [10] NÚMEROS REAIS*"<< endl;
    for(int i=0; i<10; i++){
    cout<<"v["<<i<<"] - "; cin>>n[i];
	}	
	for(i=0; i<10; i++){
		for (int x=i+1; x<10; x++){
			if(n[i]>n[x]){
				aux=n[i];
				n[i]=n[x];
				n[x]=aux;		
			}
		}	
	}
	cout << "\nNÚMEROS ORDENADOS "<<endl;	
	for(i=0; i<10; i++){
	cout << "{"<< n[i] <<"}";		
}
	return 0;
}
