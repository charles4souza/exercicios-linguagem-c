#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int contconsoantes(char string[]){ //Função

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
	
	if (' ' != string[i]) qtcaractere = 1 + qtcaractere;{ //considerando espaços
    i++;
    
    }
	}
	return qtcaractere - vogais; //Depois de estabelecer quem são as vogais, o retorne solicita que a contagem diminua as vogais e imprima o restante do valor.
}

main(){ // Programa principal
	setlocale(LC_ALL, "Portuguese"); //Comando para definir o idioma
	char frase [100];
	
	cout << "DIGITE UMA PALAVRA ou FRASE [STRING]: ";  cin.getline(frase, 100);
	
	cout << "\n A QUANTIDADE DE CONSOANTES É: " << contconsoantes(frase) << endl; //Passagem de parâmetro
	
	return 0;
}
