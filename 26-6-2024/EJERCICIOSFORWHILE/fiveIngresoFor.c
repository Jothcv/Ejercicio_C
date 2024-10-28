#include <stdio.h>
int main() {
    int num, contador = 0;
    printf("ingrese 5 numeros\n");
    for (int i=0;i<5;++i) 
    {
        scanf("%d", &num);
        if (num % 4 == 0) 
        {
            contador++;
        }
    }
    printf("multiplos de 4: %d\n", contador);
    return 0;
}
