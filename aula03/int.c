#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
int main(void){
  size_t i;

  printf("O tamanho de i (int): %zu bytes %zu bits ",sizeof i, sizeof i * 8);
  printf("\nValor de i:%zu\n",i);

  return 0;
}
