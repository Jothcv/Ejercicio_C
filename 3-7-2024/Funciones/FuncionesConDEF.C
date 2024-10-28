#include <stdio.h>
int incrementar(int *a);

int main()
{
    int num1=10;
    printf("el valor del numero antes de la funcion es: %d \n",num1);
    incrementar(&num1);
    printf("el valor incrementado es: %d ",num1);
    return 0;
}

int incrementar(int *a){
    (*a)=(*a)+1;
    return 0;
}
