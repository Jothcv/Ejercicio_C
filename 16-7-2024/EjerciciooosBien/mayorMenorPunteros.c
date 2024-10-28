#include <stdio.h>

void ord(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ordenar(int *a, int *b, int *c) {
    if (*a > *b) {
        ord(a, b);
    }
    if (*b > *c) {
        ord(b, c);
    }
    if (*a > *b) {
        ord(a, b);
    }
}

int main() {
    int num1, num2, num3;
    printf("ingresa un unumero ");
    scanf("%d", &num1);
    printf("ingresa otro nu7mero: ");
    scanf("%d",&num2);
    printf("ingresa otro numero: ");
    scanf("%d",&num3);
    ordenar(&num1, &num2, &num3);
    printf("Los ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);
    return 0;
}

