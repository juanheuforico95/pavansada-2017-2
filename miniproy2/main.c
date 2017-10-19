#include <stdlib.h>
#include <stdio.h>
#include "perfectnumber.h"
#include <stdio.h>
int main() {
  int input,result=1;
  printf("dame el numero que quieras provar que sea perfecto:\n");
  scanf("%d",&input);
  result=isPerfecNumber(input);
  return 0;
}
