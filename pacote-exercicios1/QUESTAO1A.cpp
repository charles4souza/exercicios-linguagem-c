#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int contconsoantes(char string[]){ //Fun��o

	int i = 0;
	int vogais = 0;
	int qtcaractere = 0;
	while (string[i] != '\0'){
		
	if (string[i] == 'a' || string[i] == 'A' 
	 || string[i] == 'e' || string[i] == 'E' 
	 || string[i] == 'i' || string[i] == 'I' 
	 || string[i] == 'o' || string[i] == 'O' 
	 || string[i] == 'u' || string[i] == 'U'){
	vogais++;
	}
	
	if (' ' != string[i]) qtcaractere = 1 + qtcaractere;{ //considerando espa�os
    i++;
    
    }
	}
	return qtcaractere - vogais; //Depois de estabelecer quem s�o as vogais, o retorne solicita que a contagem diminua as vogais e imprima o restante do valor.
}

main(){ // Programa principal
	setlocale(LC_ALL, "Portuguese"); //Comando para definir o idioma
	char frase [100];
	
	cout << "DIGITE UMA PALAVRA ou FRASE [STRING]: ";  cin.getline(frase, 100);
	
	cout << "\n A QUANTIDADE DE CONSOANTES �: " << contconsoantes(frase) << endl; //Passagem de par�metro
	
	return 0;
}
