#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    arr=(int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        arr[i]=i+1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] =%d",i,arr[i]);
    }

    free(arr)
    
    
    return 0;
}