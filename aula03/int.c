#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void){
 uint16_t i = USHRT_MAX; 

  printf("O tamanho de i (int): %zu bytes %zu bits ",sizeof i, sizeof i * 8);
  printf("\nValor de i:%u\n",i);

  return 0;
}
