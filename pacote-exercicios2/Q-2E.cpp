#include <stdio.h>
#include <cstdlib>
#include <iostream>


main(){
float matz [3][6],soma=0,media=0,somx[6];
int i,j;

   //Ler
   for(i=0;i<3;i++)
   {
     for(j=0;j<6;j++)
	    {
	     printf("\n\nPOSICAO [%d][%d] RECEBE: ",i,j); scanf("%f",&matz[i][j]);
	     if (j%2==0)
		    {
	     	soma= soma+matz[i][j];
	     	if (j>1 && j<6){
	     		media= media+matz[i][j];
			 }
		    }
	     
	    }
   }
   
printf("\n\n-------------Matriz normal----------------");
   
   //Mostrar matriz normal
   for(i=0;i<3;i++)
   {
     for(j=0;j<6;j++)
	    {
	     printf("\nMATRIZ NORMAL [%d][%d] : %1.f ",i,j,matz[i][j]);
	    }
   }
   
   //Somar as colunas 1(0) e 2(1) e colocar na 6(5)
   for(i=0;i<3;i++)
   {
     for(j=0;j<1;j++)
	    {
	    matz[i][5]= matz[i][j]+matz[i][j+1];
	    }
   }
   
   printf("\n\n-----------Matriz modificada-------------");
   
   //Mostrar matriz modificada
   for(i=0;i<3;i++)
   {
     for(j=0;j<6;j++)
	    {
	     printf("\nMATRIZ MODIFICADA [%d][%d] : %1.f ",i,j,matz[i][j]);
	    }
   }   
   
printf("\n\n------------------------------------------");
printf("\n\nSoma das colunas pares: %1.f",soma);
printf("\n\nMedia da 2 e 4 coluna: %1.f",media/2);

}
