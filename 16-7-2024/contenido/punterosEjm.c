//para obtener la direccion de memoria de una variable se utiliza el valor de amperson este: &
//para poder acceder al contenido de un valor que se encuentra dentro de una direccion de memoria utilizamos el signo de asterisco
#include <stdio.h>
int main(){
    int valor=5;
    int *p;
    int **pp;
    p=&valor;
    pp=&p;
    printf("contenido en memoria %d direccion de memoria: %p \n",valor,&valor);
    printf("contenido en memoria %p direccion de memoria: %d \n",p,*p);
    printf("contenido en memoria %p direccion de memoria: %p \n",pp,&pp);
    printf("el valor al que apunta el puntero es: %d",*p);
}