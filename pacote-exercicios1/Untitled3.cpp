#include <stdio.h>
#include <stdlib.h>

int conta_consoantes(char string[])
{
	int i = 0;
	int vogais = 0;
	int qnt_caracteres = 0;
	while (string[i] != '\0'){
	if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U'){
	vogais++;
	}
	if (' ' != string[i]) qnt_caracteres = 1 + qnt_caracteres;{
    i++;
    }
	}
	return qnt_caracteres - vogais;
}

int main(void)
{
	char uma_string[30]; //cria a vari�vel string
	printf("Informe uma palavra ou frase que deseja saber quantas consantes tem: \n"); //recebe a palavra ou frase
	scanf("%s", &uma_string); //armazena a palavra ou frase na vari�vel uma_string, O n�mero � o tamanho m�ximo do string ( tome o tamanho do vetor -1) e [^\n] indica que a fun��o vai capturar todos caracteres ate que uma nova linha surja.
	int vogais = conta_consoantes(uma_string); //Aqui o programa atribui o valor de uma_string a vari�vel vogais
	printf("A quantidade de consoantes eh: %d \n"); //Programa imprime a quantidade de string na frase
	system("pause");
}
