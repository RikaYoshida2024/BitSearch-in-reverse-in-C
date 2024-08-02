#include <stdio.h>
#define MAX_SIZE 32 
int bit_search(int *list,int size,int number){
    for (int i=0; i< size; i++){
        if ((list[i] & number)==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int list[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(list)/sizeof(list[0]);
    int number = 9;
    int result=bit_search(list,size,number);
    if (result != -1){
         printf("Number %d found at index %d\n", number, result);
    } else {
         printf("Number %s not found in the list\n", number);
     }
     return 0;
}