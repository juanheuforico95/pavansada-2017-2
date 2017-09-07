#include <stdio.h>
#include "minunit.h"
#include "maxones.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * testUnit() {
  int input[]={0,1,1,1,1,1,0,1,0,0,1,0,1,0,1,1};
  int size=(sizeof(input)/sizeof(int));
  int result= findMaxConsecutiveOnes(input, size);
  muAssert("se calculo mal el numero", result== 5);
  return 0;
}
static char * testInput() {
  int input[]={0,1,1,1,1,1,0,1,0,0,1,0,1,0,1,1};
  int size=(sizeof(input)/sizeof(int));
  int result= CheckInput(input, size);
  muAssert("uno de los elementos del arreglo es invalido", result== 0);
  muAssert("el tamaño del arreglo es exesivo", size <= 10000);
  return 0;
}

static char * allTests() {
  muRunTest(testInput);
  muRunTest(testUnit);

  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}
