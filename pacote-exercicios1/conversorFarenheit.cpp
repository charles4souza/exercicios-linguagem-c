#include<stdio.h>
#include<string.h>
main(){
	float C, F;
	printf("Digite a temperatura em graus celsius:");
	scanf("%f",&C);
	F = 9/5*C+32;
	printf("O valor da temperatura em  graus Celsius convertido em Farenheit e:%.2f", F);	
}
