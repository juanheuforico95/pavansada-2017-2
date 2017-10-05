#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "keyboard_row.h"

/** compare_characters
  revices 2 arreglos de strings, el programa regrevisa si el primer arreglo puede
  ser formado por los elementos del segundo, el programa regresa 1 o 0;
  basicamento lo que hace es comparar cada caracter de los strings del arreglo 1
   con los caracteres almasenados en el arreglo 2.
  @parametros:
    input: el mensaje de entrada
    row: las letras que se pueden usar

*/
int compare_characters(char * input, char * row) {
    char * temp_input;
    temp_input = strdup(input);
    char * actual;
    int i;
    for (actual = row; *actual != '\0'; actual++) {
        for (i = 0; temp_input[i] != '\0'; i++) {
          //tolower sirve para convertir  las mayusculas en minusculas
            if (tolower(*actual) == tolower(temp_input[i])) {
                temp_input[i] = '*';
            }
        }
    }
    // printf("Word: %s, temp_input: %s\n", word, temp_input);
    for (i = 0; temp_input[i] != '\0'; i++) {
        if(temp_input[i] != ' ' && temp_input[i] != '*') {
            free(temp_input);
            return 0;
        }
    }
    free(temp_input);
    return 1;
}

/** allow_word
    resives un arreglo de arreglos de strings y un apuntador del tamaño del resultado
    regresa las palabras que se pueden formar usando todas las letras que
    quieras de una sola linea del teclado.
    el programa regresa un arreglo con las palabras que pueden ser formadas
    con una sola linea del teclado americano.

    @parametros
      words: el arreglo de palabras a comparar para ver si se pueden formar
      words_size: el largo del parametro word
      return_size: la direccion de memoria donde se guarda el tamño del resultado
  * @param:
  *  words: the input array of char *
  *  words_size: the size of the char ** words
  *  return_size: the direction in memory in which to save the result's size.
  * @return:
  *  char **: the words that can be formed.
*/
char** allow_word (char** words, int words_size, int* return_size) {
    if (words == NULL || return_size == NULL) {
        return NULL;
    }
    char first_row[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char second_row[9] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    char third_row[7] = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    int *formed_array = (int *) calloc(words_size, sizeof(int));

    char **result_array;
    int result_counter = 0;

    char first_char;
    int i, j;
    int size_first = 10;
    int size_second = 9;
    int size_third = 7;
    int result;

    for (i = 0; i < words_size; i++) {
        first_char = tolower(words[i][0]);

        // Traverse the three rows at the same time to see which row matches
        // the first character.
        for (j = 0; j < size_first; j++) {
            if (j < size_second) {
                if (first_char == second_row[j]) {
                    result = compare_characters(words[i], second_row);
                    if (result) {
                        result_counter++;
                        formed_array[i] = 1;
                        break;
                    } else {
                        formed_array[i] = 0;
                    }

                    break;
                }
            }
            if (j < size_third) {
                if (first_char == third_row[j]) {
                    result = compare_characters(words[i], third_row);
                    if (result) {
                        result_counter++;
                        formed_array[i] = 1;
                    } else {
                        formed_array[i] = 0;
                    }

                    break;
                }
            }

            if (first_char == first_row[j]) {
                result = compare_characters(words[i], first_row);
                if (result) {
                    result_counter++;
                    formed_array[i] = 1;
                } else {
                    formed_array[i] = 0;
                }

                break;
            }
        }
    }

    result_array = (char **) malloc(result_counter * sizeof(char *));
    for (i = 0, j = 0; i < words_size && j < result_counter; i++) {
        if (formed_array[i]) {
            result_array[j] = malloc(256 * sizeof(char));
            strcpy(result_array[j], words[i]);
            j++;
        }
    }
    *return_size = result_counter;

    return result_array;
}
