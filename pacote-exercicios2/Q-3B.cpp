#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream> 
using namespace std;

void imprimeVetor (int *apont, int n) {
  int i;
  cout<< "Vetor:" << endl;            
  for (i=0; i<n; i++)
    cout << *(apont+i); 
  cout << "\n";
  }

int main (void) {
  int vet1[] = { 5, 4, 3, 2, 1 }; 
  int *apont;
  int N = 5;
  imprimeVetor(vet1, N); 
  return 0;
  }
