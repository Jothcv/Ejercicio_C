#include  <stdio.h>
#include <stdlib.h>

struct Registro 
{
    char nom[10];
    int cod;
    char desc[50];
    float precio;
};

int main() {
    struct Registro *prod;
    int cantidad, i;
    printf("cuantos producto quieres agregar? ");
    scanf("%d", &cantidad);
    getchar();
    prod = malloc(cantidad * sizeof(struct Registro));
    for (i = 0; i < cantidad; i++) {        
        printf("ingresa el nombre del producto: ");
        fgets(prod[i].nom, 10, stdin);
        for (int j = 0; prod[i].nom[j] != '\0'; j++) 
        {
            if (prod[i].nom[j] == '\n') {
                prod[i].nom[j] = '\0';
                break;
            }
        }
        printf("ingresa su codigo: ");
        scanf("%d", &prod[i].cod);
        getchar();
        printf("ingrese la description del producto ");
        fgets(prod[i].desc, 50, stdin);
        for (int j = 0; prod[i].desc[j] != '\0'; j++) 
        {
            if (prod[i].desc[j] == '\n') {
                prod[i].desc[j] = '\0';
                break;
            }
        }
        printf("ingresa el precio del producto ");
        scanf("%f", &prod[i].precio);
        getchar();
    }
    printf("\nEl registro de los productos son: :\n");
    for (i = 0; i < cantidad; i++) 
    {
        printf("| Nombre: %s |", prod[i].nom);
        printf(" Codigo: %d |", prod[i].cod);
        printf(" Descripcion %s |", prod[i].desc);
        printf(" Precio %.2f |", prod[i].precio);
        
    }
    free(prod);
    return 0;
}