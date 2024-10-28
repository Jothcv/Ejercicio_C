#include <stdio.h>
int calcularFactorial(int num);
void determinarTipoCaracter(char c);
void ordenarNumeros(int n);
void encontrarMayorMenor(int n);

int main() {
    int opcion;
    do {
        printf("\nMenú:\n");
        printf("1. Calcular factorial de un número\n");
        printf("2. Determinar tipo de caracter\n");
        printf("3. Ingresar números y mostrarlos ordenados\n");
        printf("4. Encontrar el mayor y el menor\n");
        printf("5. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                int num;
                printf("Ingresa un numero ");
                scanf("%d", &num);
                printf("Factorial de %d = %d\n", num, calcularFactorial(num));
                break;

            case 2:
                char c;
                printf("ingresa un caracter ");
                scanf(" %c", &c);
                determinarTipoCaracter(c);
                break;

            case 3:
                int n;
                printf("ingrese una cantidad de numeros que quiere repetir ");
                scanf("%d", &n);
                ordenarNumeros(n);
                break;

            case 4:
                printf("ingresa la cantidad de numeros para ver cual es mayor y cual es menor ");
                scanf("%d", &n);
                encontrarMayorMenor(n);
                break;

            case 5:
                printf("chao \n");
                break;

            default:
                printf("no se haga el loco solo hay 5 opsiones \n");
        }
    } while (opcion <=4);
    return 0;
}

int calcularFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

void determinarTipoCaracter(char c) {
        switch (c) {
            case 'a':
            case 'A':
                printf("es la vocal a");
                break;
            case 'e':
            case 'E':
                printf("es la vocal e");
                break;
            case 'i':
            case 'I':
                printf("es la vocal i");
                break;
            case 'o':
            case 'O':
                printf("es la vocal o");
                break;
            case 'u':
            case 'U':
                printf("Es la vocal u \n");
                break;
            case '1':
                printf("es el digito 1");
                break;
            case '2':
                printf("el digito es 2");
                break;
            case '3':
                printf("el digito es 3");
                break;
            case '4':
                printf("el digito es 4");
                break;
            case '5':
                printf("el digito es 5");
                break;
            case '6':
                printf("el digito es 6");
                break;
            case '7':
                printf("el digito es 7");
                break;
            case '8':
                printf("el digito es 8");
                break;
            case '9':
                printf("el digito es 9");
            default:
                printf("Es otro caracter  raro xdd\n");
        }
    }
 

void ordenarNumeros(int n) {
    int numeros[n];
    printf("Ingresa %d numeros \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp; 
            }
        }
    }

    printf("Nmeros ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void encontrarMayorMenor(int n) {
    int numero, mayor, menor;
    printf("ingresa %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numero);
        if (i == 0) {
            mayor = menor = numero;
        } else {
            if (numero > mayor) {
                mayor = numero;
            }
            if (numero < menor) {
                menor = numero;
            } 
        }
    }
    printf("Mayor: %d\nMenor: %d\n", mayor, menor);
}
