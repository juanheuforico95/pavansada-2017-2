#include <stdlib.h>
#include <stdio.h>
#include "perfectnumber.h"
#define MAX_LENGTH 100
/*
*PerfecNumber: this function calculates if a given number is a perfect number
*it takes an input number and check if the rest of the division of numbers from 1 to the given number
 is equal to 0 then save that number in an array and finally sum all the elements in the arry, if the
 result is equal to the input number then it is a perfect number.
*Param: input, the number wich you want to know if it is a perfect number
  return: an int value, wich represen a bool value, if is 1 means that is a perfect number.
*/

int isPerfecNumber(int input){
  int i,j, summation;
  summation=0;
  float modul;
  int dividendNumbers[MAX_LENGTH];
  j=0;
  for(i=1;i<input;i++){
    if ((input%i)==0) {
      modul=input%i;
      dividendNumbers[j]=i;
      j++;
    }
  }
  for(i=0;i<j;i++){
    printf("the dividend Numbers are: %i\n", dividendNumbers[i]);

    summation += dividendNumbers[i];
  }
  printf("summation= %i\n", summation);
  if(summation==input){
    printf("true\n");
    printf("is a perfect number\n");

    return (1);
  }else{
printf("false\n");
printf("is not a perfect number\n");

    return (0);
  }
}
