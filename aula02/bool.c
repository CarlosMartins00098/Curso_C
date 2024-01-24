#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;

  b = true;
  b = false;

  printf("\nValor de b:%u\n", sizeof b);

  return 0;
}
