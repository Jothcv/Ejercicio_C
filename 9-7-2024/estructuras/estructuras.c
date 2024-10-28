#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Estudiante {
    int id;
    char nombre[50];
    char apellido[50];
    char grado[10];
    char seccion[10];
    int edad;
};

struct Producto {
    float precioCosto;
    float precioVenta;
    int codigo;
    int cantidad;
};

struct Publicacion {
    int referencia;
    char titulo[100];
    char autor[50];
    char editorial[50];
    char tipoPublicacion[20];
    int numeroEdicion; 
    int anioPublicacion; 
    char nombreRevista[50];
};

void leerEstudiantes(struct Estudiante *estudiantes, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese datos del estudiante %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(estudiantes + i)->id);
        printf("Nombre: ");
        scanf("%s", (estudiantes + i)->nombre);
        printf("Apellido: ");
        scanf("%s", (estudiantes + i)->apellido);
        printf("Grado: ");
        scanf("%s", (estudiantes + i)->grado);
        printf("Sección: ");
        scanf("%s", (estudiantes + i)->seccion);
        printf("Edad: ");
        scanf("%d", &(estudiantes + i)->edad);
    }
}

void encontrarExtremosEdad(struct Estudiante *estudiantes, int n) {
    int maxEdad = estudiantes->edad;
    int minEdad = estudiantes->edad;
    int idxMax = 0, idxMin = 0;

    for (int i = 1; i < n; i++) {
        if ((estudiantes + i)->edad > maxEdad) {
            maxEdad = (estudiantes + i)->edad;
            idxMax = i;
        }
        if ((estudiantes + i)->edad < minEdad) {
            minEdad = (estudiantes + i)->edad;
            idxMin = i;
        }
    }

    printf("El estudiante más grande es:\n");
    printf("Nombre: %s %s, Edad: %d\n", (estudiantes + idxMax)->nombre,
           (estudiantes + idxMax)->apellido, (estudiantes + idxMax)->edad);

    printf("El estudiante más pequeño es:\n");
    printf("Nombre: %s %s, Edad: %d\n", (estudiantes + idxMin)->nombre,
           (estudiantes + idxMin)->apellido, (estudiantes + idxMin)->edad);
}

void menuColegio() {
    int n;
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);
    struct Estudiante *estudiantes = (struct Estudiante *)malloc(n * sizeof(struct Estudiante));
    leerEstudiantes(estudiantes, n);
    encontrarExtremosEdad(estudiantes, n);
    free(estudiantes);
}

void menuTienda() {
    struct Producto *productos = (struct Producto *)malloc(10 * sizeof(struct Producto));
    float gananciaTotal = 0;

    for (int i = 0; i < 10; i++) {
        printf("Producto %d:\n", i+1);
        printf("Precio Costo: ");
        scanf("%f", &(productos + i)->precioCosto);
        printf("Precio Venta: ");
        scanf("%f", &(productos + i)->precioVenta);
        printf("Codigo: ");
        scanf("%d", &(productos + i)->codigo);
        printf("Cantidad: ");
        scanf("%d", &(productos + i)->cantidad);

        gananciaTotal += ((productos + i)->precioVenta - (productos + i)->precioCosto) * (productos + i)->cantidad;
    }

    printf("Ganancia total del mes: %.2f\n", gananciaTotal);
    free(productos);
}

void menuVectores() {
    int n1, n2;

    printf("Ingrese el numero de elementos para el primer vector: ");
    scanf("%d", &n1);
    int *vector1 = (int *)malloc(n1 * sizeof(int));

    printf("Ingrese el numero de elementos para el segundo vector: ");
    scanf("%d", &n2);
    int *vector2 = (int *)malloc(n2 * sizeof(int));

    printf("Ingrese los elementos del primer vector:\n");
    for (int i = 0; i < n1; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", (vector1 + i));
    }

    printf("Ingrese los elementos del segundo vector:\n");
    for (int i = 0; i < n2; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", (vector2 + i));
    }

    for (int i = 0; i < n1-1; i++) {
        for (int j = i+1; j < n1; j++) {
            if (*(vector1 + i) > *(vector1 + j)) {
                int temp = *(vector1 + i);
                *(vector1 + i) = *(vector1 + j);
                *(vector1 + j) = temp;
            }
        }
    }

    for (int i = 0; i < n2-1; i++) {
        for (int j = i+1; j < n2; j++) {
            if (*(vector2 + i) < *(vector2 + j)) {
                int temp = *(vector2 + i);
                *(vector2 + i) = *(vector2 + j);
                *(vector2 + j) = temp;
            }
        }
    }

    printf("Vector 1 ordenado ascendentemente: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", *(vector1 + i));
    }
    printf("\n");

    printf("Vector 2 ordenado descendentemente: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", *(vector2 + i));
    }
    printf("\n");

    free(vector1);
    free(vector2);
}

void menuLibrosRevistas() {
    int n;
    printf("Ingrese el numero de publicaciones: ");
    scanf("%d", &n);
    struct Publicacion *publicaciones = (struct Publicacion *)malloc(n * sizeof(struct Publicacion));

    for (int i = 0; i < n; i++) {
        printf("Publicacion %d:\n", i+1);
        printf("Numero de referencia: ");
        scanf("%d", &(publicaciones + i)->referencia);
        printf("Titulo: ");
        scanf("%s", (publicaciones + i)->titulo);
        printf("Autor: ");
        scanf("%s", (publicaciones + i)->autor);
        printf("Editorial: ");
        scanf("%s", (publicaciones + i)->editorial);
        printf("Tipo de publicacion (libro/revista): ");
        scanf("%s", (publicaciones + i)->tipoPublicacion);

        if (strcmp((publicaciones + i)->tipoPublicacion, "libro") == 0) {
            printf("Numero de edicion: ");
            scanf("%d", &(publicaciones + i)->numeroEdicion);
            printf("Anio de publicacion: ");
            scanf("%d", &(publicaciones + i)->anioPublicacion);
        } else {
            printf("Nombre de la revista: ");
            scanf("%s", (publicaciones + i)->nombreRevista);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\nPublicacion %d:\n", i+1);
        printf("Numero de referencia: %d\n", (publicaciones + i)->referencia);
        printf("Titulo: %s\n", (publicaciones + i)->titulo);
        printf("Autor: %s\n", (publicaciones + i)->autor);
        printf("Editorial: %s\n", (publicaciones + i)->editorial);
        printf("Tipo de publicacion: %s\n", (publicaciones + i)->tipoPublicacion);

        if (strcmp((publicaciones + i)->tipoPublicacion, "libro") == 0) {
            printf("Numero de edicion: %d\n", (publicaciones + i)->numeroEdicion);
            printf("Anio de publicacion: %d\n", (publicaciones + i)->anioPublicacion);
        } else {
            printf("Nombre de la revista: %s\n", (publicaciones + i)->nombreRevista);
        }
    }
    free(publicaciones);
}

int main() {
    int opcion;
    do {
        printf("Menu:\n");
        printf("1. Colegio\n");
        printf("2. Tienda\n");
        printf("3. Vectores\n");
        printf("4. Libros o revistas\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){ 
            case 1:
                menuColegio();
                break;
            case 2:
                menuTienda();
                break;
            case 3:
                menuVectores();
                break;
            case 4:
                menuLibrosRevistas();
                break;
            case 5:
                printf("bye bye ");
                break;            
        }
       } while (opcion <=5); 

    return 0;
}           