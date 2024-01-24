#include <stdio.h>

int main(void){
  unsigned char c;

  printf("O tamanho de c é : %lu bytes %lu bits ",sizeof c, sizeof c * 8);

  c = 255;
  c = 0xa;
  c = '\n';
  printf("\nValor de c:%i\n",c);

  return 0;
}
