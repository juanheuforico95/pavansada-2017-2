#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMITE 50
int main() {
    int bandera=0;
    char cadena1[LIMITE] ="asfaf sds qwertoy";
    int numletras=0;
    int posblank=0;

    for(int i = 0; i < strlen(cadena1); i++){
        if(cadena1==""){
            printf("no existe ultima palabra");
            return 0;
        }else{
         if(cadena1[i]==' '){
            posblank=i;
            // printf("posicion %d\n", posblank);

        }
        }
    }
    if(cadena1[0]!=' ' && posblank==0){
        numletras=strlen(cadena1);
    }else{

        numletras=(strlen(cadena1)-1)-posblank;
    }
        printf("Num. letras ultima palabra %d\n", (numletras));
            return 0;
}
