#include <stdio.h>
int calcularDiaSemana(int dia, int mes, int anio) {
    if (mes < 3) {
        mes += 12;
        anio -= 1;
    }
    int k = anio % 100;
    int j = anio / 100;
    int h = (dia + 13 * (mes + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return h;
}

const char* obtenerNombreDia(int diaSemana) {
    const char* dias[] = {"Sábado", "Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes"};
    return dias[diaSemana];
}

int main() {
    int dia, mes, anio;
    printf("Ingrese la fecha de nacimiento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &anio);

    int diaSemana = calcularDiaSemana(dia, mes, anio);
    const char* nombreDia = obtenerNombreDia(diaSemana);

    printf("El día de la semana en que nació es: %s\n", nombreDia);
    
    return 0;
}
