#include <stdio.h>
#include <stdlib.h>
#include "minunit.h"
#include "perfectnumber.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"
#define perfectnumber 28

int testsRun = 0;

static char * testExpectedInput() {
  int expectednumber=28;
  int positivenumber=1;
  if(perfectnumber<0){
    positivenumber=0;
  }
  muAssert("the entry expected is 28", expectednumber==perfectnumber);
  muAssert("the number must be positive ", positivenumber);

  return 0;
}
static char * testPositiveNumber() {
  int positivenumber=1;
  if(perfectnumber<0){
    positivenumber=0;
  }
  muAssert("the number must be positive ", positivenumber);

  return 0;
}
static char * testIntegerNumber() {
  muAssert("the number is not interger", perfectnumber==(int)perfectnumber);
  return 0;
}

static char * testisPerfectNumber() {
  int expectedresult=1;
  int result =isPerfecNumber(perfectnumber);
  muAssert("error the expected result is 0 ", result==expectedresult);
  return 0;
}

static char * allTests() {
  muRunTest(testPositiveNumber);
  muRunTest(testIntegerNumber);
  muRunTest(testExpectedInput);
  muRunTest(testisPerfectNumber);
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
