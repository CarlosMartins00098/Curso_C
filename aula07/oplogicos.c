#include <stdio.h>

/*
 * Conjuncao (E, AND)
 * 0 0 - 0
 * 0 1 - 0
 * 1 0 - 0
 * 1 1 - 1
 *
 * Disjunção (OU, OR)
 * 0 0 - 0
 * 0 1 - 1
 * 1 0 - 1
 * 1 1 - 1
 */

int main(void){
  int a = 8;
  int b = 8;
  
  printf("O resultado e: %d\n", !( a == b) && b > 9);

  return 0;

}
