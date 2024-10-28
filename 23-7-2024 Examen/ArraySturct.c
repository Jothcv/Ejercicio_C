#include <stdio.h>
#include <string.h>
struct Amigo {
    char nombre[50];
    int diaCumple;
    int mesCumple;
    int anioCumple;
    char departamento[50];
};  

void agregarAmigo(struct Amigo amigos[], int *numAmigos) {
    if (*numAmigos < 5) {
        printf("como se llama tu amigo ");
        scanf("%s", amigos[*numAmigos].nombre);
        printf("ingresa el dia de su cumpleañps ");
        scanf("%d", &amigos[*numAmigos].diaCumple);
        printf("ingrese el mes: \n");
        scanf("%d", &amigos[*numAmigos].mesCumple);
        printf("ingrese el anio");
        scanf("%d", &amigos[*numAmigos].anioCumple);
        printf("en que departamento vive ");
        scanf("%s", amigos[*numAmigos].departamento);
        (*numAmigos)++;
    } else {
        printf("nos mostrara no se p    uede mas amigos\n");
    }
}

void mostrarAmigos(struct Amigo amigos[], int numAmigos) {
    for (int i = 0; i < numAmigos; i++) {
        printf("nombre %s, cumpleaniso: %02d/%02d/%04d, departamentoi %s\n",amigos[i].nombre, amigos[i].diaCumple, amigos[i].mesCumple, amigos[i].anioCumple, amigos[i].departamento);
    }
}   
void buscarAmigo(struct Amigo amigos[], int numAmigos) {
    char nombre[50];
    printf("ingresa el nombre del amigo ");
    scanf("%s", nombre);
    for (int i = 0; i < numAmigos; i++) {
        if (strcmp(amigos[i].nombre, nombre) == 0) {
            printf("Nombre: %s, cumpleanios %02d/%02d/%04d, departamento %s\n",amigos[i].nombre, amigos[i].diaCumple, amigos[i].mesCumple, amigos[i].anioCumple, amigos[i].departamento);
            return;
        }
    }-
    printf("Amigo no encontrado.\n");
}

int main() {
    struct Amigo amigos[5];
    int numAmigos = 0;
    int opcion;

    do {
        printf("\nMenu:\n");
        printf("1) Agregar\n");
        printf("2) Mostrar\n");
        printf("3) Buscar\n");
        printf("4) Salir\n");
        printf("Seleccione una opciopn: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                agregarAmigo(amigos, &numAmigos);
                break;
            case 2:
                mostrarAmigos(amigos, numAmigos);
                break;
            case 3:
                buscarAmigo(amigos, numAmigos);
                break;
            case 4:
                printf("Bye bnye\n");
                break;
            default:
                printf("no hay mas opciones loco sdjkawbf\n");
        }
    } while (opcion != 4);
    return 0;
}


