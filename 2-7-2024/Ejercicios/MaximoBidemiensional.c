//Ejercicio 4
#include <stdio.h>
int main() {
    int arreglo[3][3];
    int maximo; 
    int minimo;
    for (int i=0;i<3;++i) {
        for (int j=0;j<3;++j) {
            printf("agrega un numeto[%d][%d]: ", i, j);
            scanf("%d", &arreglo[i][j]);
        }
    }
    maximo = arreglo[0][0];
    minimo = arreglo[0][0];
    for (int i=0;i<3;++i) {
        for (int j=0;j<3;++j) {
            if (arreglo[i][j]>maximo) {
                maximo = arreglo[i][j];
            }
            if (arreglo[i][j]<minimo) {
                minimo = arreglo[i][j];
            }
        }
    }
    printf("el mayor es:  %d\n", maximo);
    printf("el menor es:  %d\n", minimo);
    return 0;
}