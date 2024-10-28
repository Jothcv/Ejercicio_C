//en las funciones por valor las variables son locales 
#include <stdio.h>
int incrementar(int num1);

int main(){
    {
        int num1=10;
        int mostrar;
        printf("el valor del numero antes de la funcion es: %d ",num1);
        mostrar=incrementar(num1);
        printf("el valor incrementado es: %d ",mostrar);
        return 0;
    }
}

int incrementar(int num1){
    {
        num1++;
        return num1;
    }
}
