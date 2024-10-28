#include <stdio.h>  
int main() {
    int numero = 10;
    int *p = &numero;  // El puntero p almacena la dirección de memoria de la variable numero

    printf("Valor de numero: %d\n", numero);  // Imprime 10
    printf("Dirección de numero: %p\n", p);   // Imprime la dirección de memoria de numero
    printf("Valor apuntado por p: %d\n", *p); // Imprime 10, el valor en la dirección almacenada en p
    return 0;
}