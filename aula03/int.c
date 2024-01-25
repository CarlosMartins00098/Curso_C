#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
  long long i;

  printf("O tamanho de i (int): %zu bytes %zu bits ",sizeof i, sizeof i * 8);
  printf("\nValor de i:%lld\n",i);

  return 0;
}
