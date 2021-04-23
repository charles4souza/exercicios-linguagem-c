#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

main() {
      int vet[4] = {0, 1, 4, 2};
      int min,aux,i;
	  
	  for (int i=2;i<4;i++){
      min = vet[i-1];
      
	  if (min < vet[i]){
      aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
                        }
                      

                }
                
     for (int i=0;i<4;i++){ 
	  cout<< vet[i];          
                
}

}
