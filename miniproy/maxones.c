#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "maxones.h"

/*
*la funcion findMaxConsecutiveOnes sirve para contar cuantos 1
* hay consecutivamente, recive de parametros un arreglo con los numeros
* y el tamaño del arreglo para poder navegar atraves de el.
**nums: arreglo con los valores
**numsSize: tamaño del arreglo
*/
    int findMaxConsecutiveOnes(int* nums, int numsSize){
      //estos son contadores
      int numones=0;
      int maxones=0;
      //flag sirve para que se guarde el maxones si no se encuentra un 0
      int flag=1;
    for(int i = 0; i < numsSize; i++){
        if(nums[i]== 1){
//           se suman unos
            numones++;
        }else if(nums[i]==0){
             if (numones> maxones){
                 maxones=numones;
                 flag=0;
             }
            numones=0;
        }}
        //calcula cuantos 1 seguidos hay
        maxones=(maxones+(numones*flag));
        printf("el maximo numero de unos consecutivos es:  %d\n", maxones);
      return maxones;
    }
    /*
    esta funcion sirve para ver si los valores en el arreglos son
    diferentes de 0 y 1;
    parametros:
    *nums: arreglo con los valores
    *numsSize: tamaño del arreglo
    */
      int CheckInput(int* nums, int numsSize){
        for(int i = 0; i < numsSize; i++){
          if(nums[i]!= 1 && nums[i]!=0){
            return 1;
        }
      }
        return 0;
      }
      /*  if(input[i]!= 1 && input[i]!=0){
           // printf("checar  %d\n", (i));
            printf("input invalido, uno de los espacios del arreglo no  es1 o 0");
            return 0;
        }

    }*/
    /*
    if(cadena1[0]!=' ' && posblank==0){
        numletras=strlen(cadena1);
    }else{

        numletras=(strlen(cadena1)-1)-posblank;
    }*/
/*
        printf("el maximo numero de unos consecutivos es:  %d\n", (maxones+(numones*flag)));
            return 0;*/
