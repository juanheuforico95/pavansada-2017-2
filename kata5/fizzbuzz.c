#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fizzbuzz.h"

/** fizzbuzz

  fizzbuzz lo que hace es que al darle un entero n va a regresar una serie del 1 asta
  n pero sustitullendo todos los numeros divisibles entre 3 por fizz,
  y los divisibles entre 5 por buzz, si se da el caso que es divisible entre ambos se sutitulle por
  fizzbuzz.
   parametros:
     n es el numero maximo de la serie.
     rsize - regresa el tamaño del char** resultante.
   return:
     char ** - es la lista de los valores de la serie.
**/
char ** fizzbuzz (int n, int * rsize) {
    int i;
    char print[11];
    char ** result = (char **) malloc(sizeof(char * ) * n);
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 5 != 0) {
                strcpy(print, "Fizz");
                result[i - 1] = (char *) malloc(sizeof(char) * 5);
            }
            else if (i % 3 != 0) {
                strcpy(print, "Buzz");
                result[i - 1] = (char *) malloc(sizeof(char) * 5);
            }
            else {
                strcpy(print, "FizzBuzz");
                result[i - 1] = (char *) malloc(sizeof(char) * 9);
            }
        }
        else {
            sprintf(print, "%d", i);
            result[i - 1] = (char *) malloc(sizeof(char) * strlen(print));
        }
        strcpy(result[i - 1], print);
    }
    *rsize = n;
    return result;
}
