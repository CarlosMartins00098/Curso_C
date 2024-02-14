#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * = atribuição
 * + - unarios
 * + - binarios (adição e subtração)
 * * / (multiplicação e divisão)
 * % (resto da divisão)
 * ++ (incremento)
 * -- (decremento)
 */


int main(void){
  
  int a;

  a = 10%4;

  a = (4 + 2) *  3;
  // a = a + 1;
  // a += 1;
  // a *= 8;
  // a++;
  
  printf("%d\n", a++);
  printf("%d\n", a);

  return 0;

}
