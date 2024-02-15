#include <stdio.h>

/*
 * &
 * |
 * ^ xor
 * ~ not
 * <<
 * >>
 */

int main(void){
  int a = 38;
  int chave = 321;

  printf("\nO resultado e: %d\n", a ^ chave);

  return 0;

}
