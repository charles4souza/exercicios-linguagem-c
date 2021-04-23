#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int Recursiva (int n){
	if(n==0)
		return 1;
	else
		return n * Recursiva(n-1);
}
main(){
	int num;
	cout<<"Digite um numero: "; cin>>num;
	cout<<"Resposta: "<<Recursiva(num);
}
/*
Recursiva(6) = 6 * Recursiva (6-1)
Recursiva(5) = 5 * Recursiva (5-1)
Recursiva(4) = 5 * Recursiva (4-1)
Recursiva(3) = 5 * Recursiva (3-1)
Recursiva(2) = 5 * Recursiva (2-1)
*/
