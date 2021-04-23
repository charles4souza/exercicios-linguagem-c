#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int a[10], b[10], c[10], i;
    printf("\nELEMENTOS DO VETOR 1");
    printf("\n********************");
    for (i = 0; i<10; i++) {
        printf("\nDIGITE O %dº ELEMENTO: ", (i+1));
        scanf("%d", &a[i]);
    }
    printf("\nELEMENTOS DO VETOR 2");
    printf("\n********************");
    for (i = 0; i<10; i++) {
        printf("\nINSIRA O %dº ELEMENTO: ", (i+1));
        scanf("%d", &b[i]);
    }
    printf("\nVETOR RESULTANTE");
    for (i = 0; i<10; i++) {
        c[i] = a[i] * b[i];
        printf("\nRESULTADO %d: %d",(i+1), c[i]);
    }
    return 0;
}
