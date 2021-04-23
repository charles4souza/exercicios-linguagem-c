#include <stdio.h>
#include <string.h>
#include <stdlib.h>


  Recursiva(char *p){
	if(*p){
	Recursiva(p+1);
	putchar(*p);		
}
}
int main() {
    char p[100];
    printf("\n Digite a palavra: ");
    gets(p);
    printf("Palavra invertida:");
    Recursiva(p);
}
