#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

  int main() {
  int alato[50]; 
  srand(time(NULL));
  int cont, i, acho, num;
   
  for (cont = 0; cont < 25; cont++) {
    do {
      acho = 0; 
      num = rand() % 99 +1;

      for (i = 0; i < 25; i++)
        if (num == alato[i])
          acho = 1; 

    } while (acho);
    alato[cont] = num;

  }
  for (i = 0; i < 25; i++){
  if (i%5==0)
		printf("\n");
		printf("[%d]",alato[i]);
}
}

