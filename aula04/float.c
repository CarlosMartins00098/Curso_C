#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
int main(void){
  float f = 40.334309; 
  printf("O tamanho de i (float): %zu bytes %zu bits\n",sizeof f, sizeof f * 8);
  printf("Valor de f:%f\n",f/3);

  return 0;
}
