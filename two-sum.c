#include <stdio.h>
#include <stdlib.h>
int * getIndexes(int *nums, int target, int len){
    int i,j;
    int candidate;
    int complement;
    int *result=(int*)calloc(2,sizeof(int));
    
    for (i =0 ; i<(len-1); i++) {
        if(nums[i]>=target){
            continue;
        }
        candidate=nums[i];
        complement = target-candidate;
        for(j=i+1; j<len;j++){
            if(nums[j]==complement){
                break;
            }
        }
        if(nums[i] + nums[j] ==target){
            result[0]=i;
            result[1]=j;
            return result;
        }
    }
    
    return NULL;
}
int main(){
    int nums[]={2,7,11,15};
    int target = 9;
    int len=4;
    int *result = getIndexes(nums,target,len);
    if(result!= NULL && (nums[result[0]]+nums[result[1]]==target)){
        printf("works!!\n");
    }else{
        printf(":\n");
    }
}