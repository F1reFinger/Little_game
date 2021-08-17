#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, n = 200, valor, pontos = 0, select,count = 0;
	char letra;
   
   /* Intializes random number generator */
   srand((unsigned) valor);
	
   /* Print 5 random numbers from 0 to 49 */
  for(i = 0; i < n; i++){	
		printf("o valor a seguir vai ser maior que 50?\n");
		printf("S para sim N para não.\n");
		printf("aperte F para sair.\n");
	  count++;
	  scanf(" %c",&letra);
	  if(letra == 'F'){
			break;
		}
	  valor = rand() % 100;
	  if(letra == 'S' && valor > 50){
			printf("ACERTOU!\n");
			printf("valor foi: %d\n",valor);
			pontos++;
		}
	  if(letra == 'S' && valor < 50){
			printf("ERRROOUU!\n");
			printf("valor foi: %d\n",valor);
		}
	  if(letra == 'N' && valor < 50){
			printf("ACERTOU!\n");
			printf("valor foi: %d\n",valor);
			pontos++;
		}
	  if(letra == 'N' && valor > 50){
			printf("ERRROOUU!\n");
			printf("valor foi: %d\n",valor);
		}
  }
	printf("Você fez %d pontos.\n",pontos);
  printf("Total de rodadas: %d.\n",i);
  return(0);
}