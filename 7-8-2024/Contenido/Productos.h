typedef struct 
{
    int codigo;
    char descripcion[20];
    float precio;
}Productos;

#define cantidad 5

void guardar (Productos Datos[cantidad]);
void listado (Productos Datos[cantidad]);