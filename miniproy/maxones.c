#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "maxones.h"
//int flag=1;
  //  int input[]={1,1,0,1};

    int findMaxConsecutiveOnes(int* nums, int numsSize){
      //int input[]=nums;
      //estos son contadores
      int numones=0;
      int maxones=0;
      //sirve para ver si el arreglo contiene solo unos
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
            // printf("posicion %d\n", posblank);
        }}
        //calcula cuantos 1 hay
        maxones=(maxones+(numones*flag));
        printf("el maximo numero de unos consecutivos es:  %d\n", maxones);
      return maxones;
    }
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
