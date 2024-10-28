#include <stdio.h>
int main() {
    int num;
    int contador = 0;
    int i = 0;
    printf("ingresa 5 numeros\n");
    while (i<5) 
    {
        scanf("%d", &num);
        if (num % 4 == 0) 
        {
            contador++;
        }
        i++;
    }
    printf("Cantidad de números múltiplos de 4: %d\n", contador);
    return 0;
}
