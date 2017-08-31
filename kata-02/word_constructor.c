#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "word_constructor.h"


int constructor(char * message, char * scrabble) {
    char * message_copied;
    message_copied = strdup(message);
    char * current;
    int i;
    for (current = scrabble; *current != '\0'; current++) {
        for (i = 0; message_copied[i] != '\0'; i++) {
            if(*current == message_copied[i]) {
                message_copied[i] = '*';
                break;
            }
        }
    }
    for (i = 0; message_copied[i] != '\0'; i++) {
        if(message_copied[i] != ' ' && message_copied[i] != '*') {
            free(message_copied);
	    printf("FAIL!: The scrabble can not write the sentence.\n");
            return 0;
        }
	
    }
    free(message_copied);
    printf("GOOD JOB!: The scrabble can write the sentence.\n");
    return 1;

}
