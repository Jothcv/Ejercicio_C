#include <stdio.h>
int main(){
    int x=10;
    int *ptr=&x;

    printf("valor de x: %d",x);
    printf("direccion de x: %p",(void *)ptr);
    printf("valor al que apunte ptr: %d",*ptr);
    
    return 0;
}