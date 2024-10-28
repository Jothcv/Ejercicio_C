#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxItems = 50; 
char* ArchivoNombre = "productos.txt"; 

typedef struct {
    int codigo;
    char nombre[100];
    double precio;
} Producto;

void mostrarMasProducto();
void MostrarProducto();
void BuscarProducto();

int main() {
    int opcion;

    do {
        printf("\nMenu\n1)registrar producto\n2)mostrar los productos\n3)consultar\n4)Salir");
        printf("que opcion quiere usar: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: 
                mostrarMasProducto(); 
                break;
            case 2: 
                MostrarProducto(); 
                break;
            case 3: 
                BuscarProducto(); 
                break;
            case 4: 
                printf("bye bye\n"); 
                break;
            default: printf("opcion invalida no se se haga el loco esta opcion no exite\n");
        }
    } while (opcion != 4);
    return 0;
}

void mostrarMasProducto() 
{
    Producto producto;
    FILE *Archivo = fopen(ArchivoNombre, "a");
    printf("ingresa el codigo del producto ");
    scanf("%d", &producto.codigo);
    printf("ingresa el nombre/descripcion ");
    getchar(); 
    fgets(producto.nombre, 100, stdin);
    printf("ingresa el precio");
    scanf("%lf", &producto.precio);
    fprintf(Archivo, "%d;%s;%.2lf\n", producto.codigo, producto.nombre, producto.precio);
    fclose(Archivo);
    printf("el profucto se agrego existasamente grrrr\n");
}

void MostrarProducto() 
{
    Producto producto;
    FILE *Archivo = fopen(ArchivoNombre, "r");
    printf("objetos:\n");
    while (fscanf(Archivo, "%d;%99[^;];%lf\n", &producto.codigo, producto.nombre, &producto.precio) == 3) 
    {
        printf("| %d | %s | %.2lf |\n", producto.codigo, producto.nombre, producto.precio);
    }
    fclose(Archivo);
}
void BuscarProducto() 
{
    int codigo;
    Producto producto;
    int num1 = 0;
    FILE *Archivo = fopen(ArchivoNombre, "r");
    printf("pon el codigo del producto que queras buscar: ");
    scanf("%d", &codigo);
    while (fscanf(Archivo, "%d;%99[^;];%lf\n", &producto.codigo, producto.nombre, &producto.precio) == 3) //fjkagfva
    {
        if (producto.codigo == codigo) 
        {
            printf("| %d | %s | %.2lf |\n", producto.codigo, producto.nombre, producto.precio);
            num1 = 1;
            break;
        }
    }
    if (num1 == 0) 
    {
        printf("efesota el profucto no se encontro: \n");
    }
    fclose(Archivo);
}

   