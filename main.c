#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int i, aleatorio, chute, vidas = 5;
  srand( time(NULL));
    aleatorio = rand()%21;
    
    
  while(vidas > 0){
  printf ("Adivinhe o número (de 0 até 20): \n");
  
  scanf("%d", &chute);
    if (chute == aleatorio){
      printf ("Você ganhou\n");
      vidas = 0;
      }
      else if (chute > aleatorio) {
        printf ("seu chute é maior que o número\n");
        vidas--;
        if (vidas == 0) {
          printf ("Você perdeu.\n");
        }
      }
          else {
            printf("Seu chute é menor que o número\n");
            vidas--;
            if (vidas == 0) {
          printf ("Você perdeu.\n");
        }
            }
      
      
  }
  
  }

  