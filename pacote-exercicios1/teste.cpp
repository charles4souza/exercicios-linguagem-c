#include<iostream>
using namespace std;
main(){
	int vetor[5];
	float media;
	
	for(int i=0;i<5;i++){
	cout<<"infome um numero: ";
	cin>>vetor[i];
	media+=vetor[i];
}
	media=media/5;
	for(int i=0;i<5;i++){
		cout<<"numeros: "<<vetor[i]<<endl;
	}
	cout<<"media: "<<media;

