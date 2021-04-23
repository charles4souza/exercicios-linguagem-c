#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

  Recursiva(char *palavra){
	
	if(*palavra){
	Recursiva(palavra+1);
	putchar(*palavra);		
}
}
int main() {
	
    char palavra[20];
    setlocale(LC_ALL, "Portuguese");
    
    cout<<"\nDIGITE A PALAVRA: ";
    gets(palavra);
    cout<<"\nPALAVRA INVERTIDA: ";
    Recursiva(palavra);
}
