#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
int main(void){
  float f = 3e2; // 3 * 10^2

  printf("O tamanho de i (float): %zu bytes %zu bits ",sizeof f, sizeof f * 8);
  printf("\nValor de f:%.2f\n",f);

  return 0;
}
