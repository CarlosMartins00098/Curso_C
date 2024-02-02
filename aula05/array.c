#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  long int c[3];

  printf("O tamanho de c eh: %zu\n",sizeof c);
  printf("O número de elememtos em c eh: %zu\n",sizeof c / sizeof c[0]);

  c[0]='A';
  c[1]= 0x42;
  c[2]= 67;

  printf("O tamanho 0 de c eh: %ld\n", c[0]);
  printf("O tamanho 1 de c eh: %ld\n", c[1]);
  printf("O tamanho 2 de c eh: %ld\n", c[2]);
  printf("O tamanho 3 de c eh: %ld\n", c[2]);
  
  printf("O endereço de c em memoria: %p\n", c);

  printf("O endereço   &c em memoria: %p\n", &c[0]);
  printf("O endereço do c em memoria: %p\n", &c[1]);



  return 0;

}
